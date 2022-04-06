class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int start = i+1, end = n-1;
            int target = -nums[i];
            while(start < end){
                int sum = nums[start]+nums[end];
                if(sum == target){
                    vector<int> triplet = {nums[i], nums[start], nums[end]};
                    res.push_back(triplet);
                    // Escaping Duplicates
                    while(start < end && nums[start] == triplet[1])
                        start++;
                    // Escaping Duplicates
                    while(start < end && nums[end] == triplet[2])
                        end--;
                }
                else if(sum < target)
                    start++;
                else 
                    end--;
            }
            // Escaping Duplicates
            while(i < n-1 && nums[i] == nums[i+1])
                i++;
        }
        return res;
    }
};