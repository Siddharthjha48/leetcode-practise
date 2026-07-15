class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack<int> st;

        for(int i=0;i<n;i++){
            bool destroyed = false ;
            while(!st.empty() && asteroids[i]<0 && st.top()>0){
                if(abs(st.top())<abs(asteroids[i])){

                st.pop();
                }
                else if(abs(st.top()) == abs(asteroids[i])){
                    destroyed = true;
                    st.pop();
                    break ;
                }
                else{
                    destroyed = true ;
                    break ;
                }
            }
            if(!destroyed){
                st.push(asteroids[i]);
            }

        }
        vector<int> ans;

        for(int i=st.size()-1;i>=0;i--){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans ;

        
    }
};