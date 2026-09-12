class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0,right=0,maxi =INT_MIN,maxf=0;
        map<char,int> mp ;

        for(right=0;right<s.size();right++){
            mp[s[right]]++ ;

            maxf = max(mp[s[right]],maxf) ;

            while(right-left+1-maxf>k){
                mp[s[left]]-- ;
                left++ ;
            }
            int len = right-left+1 ;
            maxi = max(maxi,len) ;


        }
        return maxi ;
        
    }
};