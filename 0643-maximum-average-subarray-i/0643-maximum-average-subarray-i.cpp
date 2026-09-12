class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0,maxi =INT_MIN;
        for(int i=0;i<k;i++){
            sum+=nums[i] ;
        }
        maxi = sum ;

        for(int i=k;i<nums.size();i++){
          sum = sum-nums[i-k]+nums[i] ;
          maxi = max(sum,maxi) ;




        }
        return maxi/k ;

        
    }
};