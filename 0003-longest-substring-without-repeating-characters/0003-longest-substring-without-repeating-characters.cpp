class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;

        int ans = 0;
        unordered_map<int,int> freq ;

        for(int r=0;r<s.length();r++){
            freq[s[r]]++ ;

            while(freq[s[r]]>1){
                freq[s[l]]--;
                l++;
            }

            ans = max(ans,r-l+1);
        }
        return ans ;
        

    }
};