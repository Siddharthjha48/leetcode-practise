class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int threshold) {
        int sum =0;
        int avg =0;

        for(int i=0;i<k;i++){
            sum+=nums[i];
        }

        int count = 0;
        int av = sum/k;

        if(av >=threshold){
            count++;
        }



        for(int i=k;i<nums.size();i++){
            sum+=nums[i];
            sum-=nums[i-k];
            avg = sum/k;

            if(avg>=threshold){

            count++ ;
            }
        }
        return count ;
    }
};