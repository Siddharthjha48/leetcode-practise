class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int low = 0,high = 0,sum = 0;
        int n = nums.length ;
        int res = Integer.MAX_VALUE ;

        while(high<n){
            sum+=nums[high] ;

            while(sum>= target){
                int len = high-low+1;
                res = Math.min(len,res) ;
                sum -= nums[low] ;
                low++;
            }
            high++;
        }
        return (res ==Integer.MAX_VALUE)?0:res ;
        
    }
}