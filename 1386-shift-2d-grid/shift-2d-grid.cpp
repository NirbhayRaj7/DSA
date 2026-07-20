class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int total = m * n;
        
        vector<vector<int>> result(m, vector<int>(n));
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) { 
                int new_1d_index = (i * n + j + k) % total;
                int new_row = new_1d_index / n;
                int new_col = new_1d_index % n;
                
                result[new_row][new_col] = grid[i][j];
            }
        }
        
        return result;
    }
};