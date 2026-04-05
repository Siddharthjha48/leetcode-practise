class Solution {
public:
    bool judgeCircle(string moves) {
        int l=0,r=0,u=0,d=0;
        for(int i=0;i<moves.length();i++){
            char c = moves[i];
            if(c == 'L'){
                l++;
            }
            
            else if(c == 'U'){
                u++;
            }
            else if(c == 'R'){
                r++;
            }
            else if(c == 'D'){
                d++;
            }
            
        }

        if(u == d && r == l){
            return true;
        }
     
            return false ;
        
       
        
    }
};