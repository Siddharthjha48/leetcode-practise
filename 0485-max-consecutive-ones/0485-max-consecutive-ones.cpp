class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i =0,n=nums.size(),count =0,maxi = 0;

        while(i<n){
           
            if(nums[i] ==1 ){
                count++ ;

            maxi = max(maxi,count) ;
            }
            else{
                count = 0;
            }
            i++;
        }

        return maxi ;
        
    }
};