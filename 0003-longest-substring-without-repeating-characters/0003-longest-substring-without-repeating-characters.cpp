class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left =0,right =0,maxi=INT_MIN ;
        map<char,int> mp ;

        for(right =0;right<s.size();right++){
            mp[s[right]]++ ;

            while(mp[s[right]] >1){
                mp[s[left]]--;
                left++ ;

            }
            int len = right-left+1 ;
            maxi = max(maxi,len) ;


        }
        return (maxi==INT_MIN) ?0: maxi ;
        
    }
};