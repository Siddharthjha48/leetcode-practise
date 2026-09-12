class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0,right=0,maxi = INT_MIN ,zeroes = 0;

        for(right=0;right<nums.size();right++){
            if(nums[right] == 0){
                zeroes++;
            }

            while(zeroes> k){
                if(nums[left] ==0){

                zeroes--;
                }
                left++ ;

            }
            int len = right-left+1 ;
            maxi = max(len,maxi) ;

        }

        return maxi ;
        
    }
};