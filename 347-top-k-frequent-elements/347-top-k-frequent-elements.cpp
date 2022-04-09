class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        if(k == n){
            return nums;
        }
        // Hashing
        map<int, int> counts;
        for(int i = 0; i < n; i++){
            counts[nums[i]] += 1;
        }
        // Heap with most frequent elements at the top
        auto cmp = [&counts](int a, int b) {
            return counts[a] > counts[b]; 
        };
        priority_queue<int, vector<int>, decltype(cmp)> pq(cmp);
        for(pair<int, int> p: counts){
            pq.push(p.first);
            if(pq.size() > k) {
                pq.pop();
            }
        }
        // Returning resultant vector of top k frequent
        vector<int> v(k);
        for(int i = k-1; i >= 0; i--){
            v[i] = pq.top();
            pq.pop();
        }
        return v;
    }
};