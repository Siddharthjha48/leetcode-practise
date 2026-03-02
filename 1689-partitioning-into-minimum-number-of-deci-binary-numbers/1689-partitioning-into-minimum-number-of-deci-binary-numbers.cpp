class Solution {
public:
    int minPartitions(string n) {
        int digit = 0;
       for(int c: n){
         digit = max(digit,(c-'0')) ;
        
       }
       return digit ;
    }
};