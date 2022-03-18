class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int n = time.size();
        vector<long long> mp(60, 0);
        for(int i = 0; i < n; i++){
            mp[time[i]%60] += 1;
        }
        int pairs = 0;
        pairs += ((mp[0]-1)*(mp[0]))/2;
        pairs += ((mp[30]-1)*(mp[30])/2);
        for(int i = 1; i < 30; i++){
            pairs += mp[i]*mp[60-i];
        }
        return pairs;
    }
};