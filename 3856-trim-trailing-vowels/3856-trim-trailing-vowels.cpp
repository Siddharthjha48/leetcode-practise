class Solution {
public:
    string trimTrailingVowels(string s) {
        while(!s.empty()){
            char last = s.back();
            if(last == 'a' || last == 'e' || last == 'i' || last == 'o' || last == 'u'){
                s.pop_back();
            }
            else{
                break ;
            }
        }
        return s ;
    }
};