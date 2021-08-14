class Solution {
public:
    vector<int> direction={0, -1, 0, 1, 0};
    vector<vector<bool>> visited;
    bool containsCycle(vector<vector<char>>& grid) {
        int m = grid.size(), n = grid[0].size();
        visited = vector<vector<bool>> (m, vector<bool>(n, false));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(!visited[i][j]){
                    visited[i][j] = true;
                    if(DFS(grid, i, j, -1, -1))
                        return true;
                }
            }
        }
        return false;
    }
    bool DFS(vector<vector<char>>& grid, int i, int j, int pi, int pj){
        for(int d = 0; d < 4; d++){
            int row = i+direction[d];
            int col = j+direction[d+1];
            if(row >= 0 && row<grid.size() && col >= 0 && col < grid[0].size()){
                if(visited[row][col] && pi!=row && pj!=col && grid[row][col]==grid[i][j])
                    return true;
                
                if(visited[row][col] || grid[row][col] != grid[i][j]) continue;
                visited[row][col] = true;
                if(DFS(grid, row, col, i, j))
                    return true;
            }
        }
        return false;
    }
};
