class Solution {
    public int longestOnes(int[] nums, int k) {
        int low = 0,high = 0;
        int n = nums.length ;
        int res = Integer.MIN_VALUE ;
        int zeroes = 0;

        while(high<n){
            if(nums[high] == 0){
                zeroes++;
            }

            while(zeroes>k){
                if(nums[low] == 0){
                    zeroes--;

                }
                    low++;
            }
            int len = high-low+1;
            res = Math.max(len,res);
            high++;


        }
        return res ;

       
        
    }
}