class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int left=0,right=0,maxi = INT_MIN ;

        map<int ,int> mp ;

        for(right=0;right<fruits.size();right++){
            mp[fruits[right]]++ ;


            while(mp.size() >2){

                mp[fruits[left]]--;
        if(mp[fruits[left]] == 0) {
          mp.erase(fruits[left]);
}
            left++ ;
            }
            
        int len = right-left+1 ;
        maxi = max(maxi,len) ;
        }

        return maxi ;
        
    }
};