class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int odd = 1,even = 0;

        while(odd<n){
            if(nums[odd] %2 == 0){
                swap(nums[even],nums[odd]);
                even+=2 ;
            }
            else if(nums[odd] %2 != 0){
                odd+=2 ;
            }
        }

        return nums;
        
    }
};