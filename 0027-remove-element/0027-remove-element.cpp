class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        nums.erase(std::remove(nums.begin(),nums.end(),val),nums.end());

        for(auto s: nums){
            cout<<s;
        }
        return nums.size();
    }


};