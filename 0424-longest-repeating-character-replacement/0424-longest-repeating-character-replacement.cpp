class Solution {
public:
    int characterReplacement(string s, int k) {
        int l =0;
        unordered_map<char,int> freq;
        int maxi =0,maxf=0;

        for(int r=0;r<s.length();r++){
            freq[s[r]]++;

            maxf = max(maxf,freq[s[r]]);
            while((r-l+1)-maxf>k){
                freq[s[l]]--;
                l++;
            }
            maxi = max(maxi,r-l+1);



        }
        return maxi ;



    
        
    }
};