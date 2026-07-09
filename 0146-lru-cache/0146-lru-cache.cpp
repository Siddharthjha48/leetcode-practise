class LRUCache {
public:

class ListNode{
    public:
    int key ;
    int value ;
    ListNode*next;
    ListNode*prev;

    ListNode(int k,int y){
        key =k;
        value = y;
        prev = NULL;
        next = NULL;
    }

};

unordered_map<int, ListNode*> cache;
    int cap = 0;
    ListNode*head ;
    ListNode*tail ;
    //if we have to add an node immediately after head,which will make it most recently used mru
    void AddtoFront(ListNode* node){
        node->next = head->next ;
        node->prev = head ;
        head->next->prev = node ;
        head->next = node ;

    }
    void removeNode(ListNode* node){
        ListNode*left = node->prev;
        ListNode*right = node->next ;

        left->next = right ;
        right->prev = left ;
    }

    void movetoFront(ListNode* node){
       removeNode(node);
       AddtoFront(node); 
    }
    LRUCache(int capacity) {
        cap = capacity ;
        head = new ListNode(-1,-1);
        tail = new ListNode(-1,-1);
        

        head->next = tail;
        tail->prev = head ;
        
    }
    
    int get(int key) {
        if(cache.find(key) == cache.end()){
            return -1;
        }
        ListNode*node = cache[key];
        movetoFront(node);
        return node->value ;

        
    }
    
    void put(int key, int value) {
        //case 1 : already exists then update the val and move to front
        if(cache.find(key) != cache.end()){
            ListNode* node = cache[key] ;
            node->value =value;
            movetoFront(node);
            return ;
        }
        //case2 : if cache full then remove LRU

        if(cache.size() == cap){
            ListNode* node = tail->prev ;
            cache.erase(node->key) ;
            removeNode(node);
            delete node ;
        }
        ListNode* node = new ListNode(key,value);
        cache[key] = node;
        AddtoFront(node) ;

        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */