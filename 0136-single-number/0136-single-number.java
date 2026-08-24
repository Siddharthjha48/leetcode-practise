class Solution {
    public int singleNumber(int[] nums) {
        int n = nums.length ;
        HashMap<Integer,Integer> mp = new HashMap<>() ;

        for(int x: nums){
            mp.put(x,mp.getOrDefault(x,0)+1) ;
        }
        int ans  =0;

        for(int x: mp.keySet()){
            if(mp.get(x) ==1){
                ans = x;
            }

        }
        return ans;
        
    }
}