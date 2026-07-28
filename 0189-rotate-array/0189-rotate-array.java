class Solution {
    static void swap(int [] nums,int a ,int b){
        int temp = nums[a];
        nums[a] = nums[b];
        nums[b] = temp ;

    }
    static void reverse(int [] nums,int start,int end ){
        

        while(start<end){
            swap(nums,start,end);
            start++;
            end-- ;
        }
    }
    public void rotate(int[] nums, int k) {
        k = k%nums.length ;
        reverse(nums,0,nums.length-1) ;
        reverse(nums,0,k-1);
        reverse(nums,k,nums.length-1) ;


        
    }
}