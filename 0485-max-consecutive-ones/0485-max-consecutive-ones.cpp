class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size(),i=0,count =0,maxi =INT_MIN ;

        while(i<n){
            if(nums[i] ==1){
                count++;
            }
            maxi = max(maxi,count) ;

            if(nums[i] == 0){
                count = 0;
            }
            i++;
        }
        return maxi ;
        
    }
};