class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int i = 0;
        bool flag = false;
        while(i < n){
            int m = matrix[i].size();
            if(matrix[i][m-1] >= target){
                flag = true;
                break;
            }
            i++;
        }
        if(flag){
            for(int j = 0; j < matrix[i].size(); j++){
                if(matrix[i][j] == target) return true;
            }
        }
        return false;
    }
};