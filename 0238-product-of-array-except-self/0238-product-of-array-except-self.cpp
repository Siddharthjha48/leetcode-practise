class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int leftp=1,rightp=1;
        vector<int> ans(nums.size(),1) ;

        for(int i=0;i<nums.size();i++){
            ans[i]*=leftp;
            leftp*=nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--){
            ans[i]*=rightp;
            rightp*=nums[i];
        }
        return ans ;
        
    }
};