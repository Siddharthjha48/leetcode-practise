class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size() ;
        int i = 0,j=1,count = 0 ;
        if(nums.empty()) return 0;

        while(j<n){
            if(nums[j] != nums[i]){
                count++;
                i++;
            nums[i] = nums[j] ;
            }
            j++;
        }
        return count+1 ;
        
    }
};