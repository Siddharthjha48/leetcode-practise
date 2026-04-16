class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxi =0;
        int mini = 0;
        int res = 0,sum =0,maxending=0,minending=0;

        for(int i=0;i<nums.size();i++){
            maxending = max(nums[i],maxending+nums[i]);
            maxi = max(maxi,maxending);

            minending = min(nums[i],minending+nums[i]);
            mini = min(mini,minending);
            res = max(maxi,abs(mini));


           
        }
        return res ;
        
    }
};