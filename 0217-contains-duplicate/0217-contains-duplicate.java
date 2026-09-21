class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashMap<Integer, Integer> mp = new HashMap<>() ;

        for(int x: nums){
            mp.put(x,mp.getOrDefault(x,0)+1) ;
        }

        for(int i = 0;i<nums.length;i++){
            if(mp.get(nums[i]) >1){
                return true ;
            }

        }
        return false ;
        
    }
}