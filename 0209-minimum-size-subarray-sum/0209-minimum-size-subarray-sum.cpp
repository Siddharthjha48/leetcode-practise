class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int left=0,right =0,sum =0,mini = INT_MAX,len =0;

        for(right =0;right<nums.size();right++){
            sum+=nums[right] ;

            while(sum>=target){
                len = right-left+1 ;
                mini = min(mini,len) ;
                sum-=nums[left] ;
                left++;

            }

        }
        return (mini== INT_MAX)?0:mini ;


    }
};