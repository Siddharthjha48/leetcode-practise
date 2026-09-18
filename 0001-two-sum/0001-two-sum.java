class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] ans = new int [2] ;
        HashMap<Integer, Integer> mp = new HashMap<> () ;
        for(int i=0;i<nums.length;i++){
            int need = target - nums[i] ;
            if(mp.containsKey(need)){
                ans[0] = mp.get(need) ;
                ans[1] = i ;
            }
            mp.put(nums[i], i);
        }

        return ans ;
    }



}