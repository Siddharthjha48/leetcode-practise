class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {

        int sum = 0,left=0,right =0;
        int length =0,mini = INT_MAX;

        for(int right=0;right<nums.size();right++){
            sum+=nums[right] ;

            while(sum>=k){
                length = right-left+1 ;

                mini = min(length,mini) ;
                sum -= nums[left] ;
                left++ ;
                
            }



        }
        return (mini == INT_MAX)?0:mini ;
        
    }
};