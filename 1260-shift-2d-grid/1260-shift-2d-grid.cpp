class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        if(k == 0)
            return grid;
        int temp = INT_MAX;
        for(int i = 0;i < m;i++){
            for(int j = 0;j < n;j++){
                swap(temp, grid[i][j]);
            }
        }
        swap(temp, grid[0][0]);
        return shiftGrid(grid, k - 1);
    }
};