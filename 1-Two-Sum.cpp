class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> pos;
        vector<pair<int,int>> a;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            a.push_back(make_pair(nums[i],i));
        }
        sort(a.begin(), a.end());
        int i = 0;
        int j = n-1;
        while(i < j){
            if(a[i].first+a[j].first == target){
                pos.push_back(a[i].second);
                pos.push_back(a[j].second);
                break;
            }
            else if(a[i].first+a[j].first < target){
                i++;
            }
            else{
                j--;
            }
        }
        return pos;
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> pos;
        map<int,int> mp;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(mp.count(target-nums[i])){
                pos.push_back(mp[target-nums[i]]);
                pos.push_back(i);
                break;
            }
            else
                mp[nums[i]] = i;
        }
        return pos;
    }
};
