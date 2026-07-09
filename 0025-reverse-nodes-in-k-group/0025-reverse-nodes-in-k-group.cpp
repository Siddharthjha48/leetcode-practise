class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        int count = 0;


        while (curr != NULL && count < k) {
            curr = curr->next;
            count++;
        }

        if (count == k) {
            curr = head;
            ListNode* prev = NULL;
            ListNode* nextNode = NULL;

            count = 0;

            while (count < k) {
                nextNode = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nextNode;
                count++;
            }
            head->next = reverseKGroup(curr, k);

            return prev;   
        }

        return head; 
    }
};