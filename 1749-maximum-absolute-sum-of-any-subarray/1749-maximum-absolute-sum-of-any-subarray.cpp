class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxending = 0,minending = 0,mini=0,maxi =0,res =nums[0];

        for(int i=0;i<nums.size();i++){
            maxending = max(maxending+nums[i],nums[i]);
            maxi = max(maxi,maxending);

            minending = min(minending+nums[i],nums[i]);
            mini = min(mini,minending);

            res = max(abs(res),max(abs(maxi),abs(mini)));
        }
        return res ;
        
    }
};