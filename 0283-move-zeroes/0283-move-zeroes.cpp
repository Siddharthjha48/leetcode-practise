class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n  = nums.size() ;
        int start  =0, j=0;

        while(j<n){
            if(nums[j] != 0){
                swap(nums[j],nums[start]) ;
                start++ ;

            }
            j++;

        }
        
    }
};