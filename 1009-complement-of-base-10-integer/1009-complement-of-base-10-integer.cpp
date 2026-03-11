class Solution {
public:
    int bitwiseComplement(int n) {
         if(n == 0) return 1;
        int i =0,j=0;
        int num=n;
        while(i<n){
            i+=pow(2,j);
            j++;
        }
        return i -num;
    }
    
};