class Solution {
public:
    long long atMost(vector<int>& nums, int k) {
        int l = 0;
        long long countodd = 0, count = 0;
        for (int r = 0; r < nums.size(); r++) {
            if (nums[r] % 2 != 0) {
                countodd++;
            }
            while (countodd > k) {
                if (nums[l] % 2 != 0) {
                    countodd--;
                }
                l++;
            }
            count += (r - l + 1);
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};