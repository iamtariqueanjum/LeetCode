class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int diff = nums[n-1]-nums[0];
        int minh = nums[0]+k;
        int maxh = nums[n-1]-k;
        for(int i = 0; i < n-1; i++){
            int mi = min(minh, nums[i+1]-k);
            int ma = max(maxh, nums[i]+k);
            diff = min(diff, ma-mi);
        }
        return diff;
    }
};