class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        map<int, int> freq;
        int m = nums1.size();
        int n = nums2.size();
        for(int i = 0; i < m; i++){
            freq[nums1[i]]++;
        }
        for(int i = 0; i < n; i++){
            if(freq[nums2[i]] > 0){
                v.push_back(nums2[i]);
                freq[nums2[i]]--;
            }
        }
        return v;
    }
};