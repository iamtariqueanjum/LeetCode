class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> merged;
        sort(intervals.begin(), intervals.end());
        int x = intervals[0][0];
        int y = intervals[0][1];
        int n = intervals.size();
        for(int i = 1; i < n; i++){
            if(intervals[i][0] <= y){
                y = max(y, intervals[i][1]);
            }
            else{
                merged.push_back({x,y});
                x = intervals[i][0];
                y = intervals[i][1];
            }
        }
        merged.push_back({x,y});
        return merged;
    }
};