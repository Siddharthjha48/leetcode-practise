class Solution {
public:
    int minOperations(string s) {
        string a,b;
       for(int i=0;i<s.length();i+=2){
        a.push_back(s[i]);
       }
       for(int i=1;i<s.length();i+=2){
        b.push_back(s[i]);
       }
        int m1=0,m2=0;

        for(int i=0;i<a.length();i++){
            if(a[i] != '1'){
                m1++;
            }
            if(a[i] != '0'){
                m2++;
            }
        }
        for(int i=0;i<b.length();i++){
            if(b[i] != '1'){
                m2++;
            }
            if(b[i] != '0'){
                m1++;
            }
        }

        return min(m1,m2);

        
    }
};