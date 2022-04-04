class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int maxdiff = 0;
        for(int i = 0; i < n-1; i++){
            maxdiff = max(maxdiff, nums[i+1]-nums[i]);
        }
        return maxdiff;
    }
};