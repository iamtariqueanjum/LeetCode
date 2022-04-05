class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        map<int, int> mp;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(mp.count(target-nums[i])){
                res.push_back(i);
                res.push_back(mp[target-nums[i]]);
                break;
            }
            else{
                mp[nums[i]] = i;
            }
        }
        return res;
    }
};