https://leetcode.com/problems/path-with-maximum-gold/
class Solution {
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        int count = 0;
        for(int i  = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] != 0){
                    dfs(i,j,m,n,grid,ans,count);
                }
            }
        }
        return ans;
    }
    void dfs(int i, int j, int m, int n,vector<vector<int>> &grid,int &ans, int count){
        ans = max(ans,count);
        if( i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == 0) return;
        count += grid[i][j];
        int temp = grid[i][j];
        grid[i][j] = 0;
        dfs(i+1,j,m,n,grid,ans,count);
        dfs(i,j+1,m,n,grid,ans,count);
        dfs(i-1,j,m,n,grid,ans,count);
        dfs(i,j-1,m,n,grid,ans,count);
        grid[i][j] = temp;
        //count -= grid[i][j];
    }
};
