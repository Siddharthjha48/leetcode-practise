class Solution {
public:
    int numberOfSubstrings(string s) {
        int l=0,count =0;
        unordered_map<char,int> freq;

        for(int r=0;r<s.length();r++){
            freq[s[r]]++;

        while(freq['a']>0 && freq['b']>0 && freq['c']>0){
            count +=s.length()-r ;
            freq[s[l]]--;
            l++;
        }
        }
        return count ;
        
    }
};