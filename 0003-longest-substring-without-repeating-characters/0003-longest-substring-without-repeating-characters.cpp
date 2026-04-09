class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,maxi =0;
        unordered_map<char,int> freq;

        for(int r=0;r<s.length();r++){
            freq[s[r]]++;

            while(freq[s[r]]>1){
                freq[s[l]]--;
                l++;
            }
            maxi = max(maxi,r-l+1);


        }
        return maxi;



        
        
    }
};