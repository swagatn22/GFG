class Solution {
public:
    int isvalid(int i, int j, int m, int n){
        if(i < 0 || j < 0 || i >= m || j >= n) return 0;
        return 1;
    }
    int shortestBridge(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int flag = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 1){
                    dfs1(i,j,m,n,grid);
                    flag = 1;
                    break;
                }
            }
            if(flag) break;
        }
        flag = 0;
        for(int i = 0; i < m; i++){
             for(int j = 0; j < n; j++){
                 if(grid[i][j] == 1){
                     dfs2(i,j,m,n,grid);
                     flag = 1;
                     break;
                 }
             }
            if(flag) break;
        }
        queue<pair<int,int>>q;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 2){
                    q.push({i,j});
                }
            }
        }
        int steps = 0;
        int dx[4] = {-1,0,1,0};
        int dy[4] = {0,1,0,-1};
        int visit[m][n];
        memset(visit,0,sizeof(visit));
        while(!q.empty()){
            int s = q.size();
            steps++;
            for(int i = 0; i < s; i++){
                int r = q.front().first;
                int c = q.front().second;
                q.pop();
                for(int i = 0; i < 4; i++){
                    int rx = r + dx[i];
                    int cy = c + dy[i];
                    if(isvalid(rx,cy,m,n) && grid[rx][cy] == 0 && visit[rx][cy] == 0){
                        q.push({rx,cy});
                        visit[rx][cy] = 1;
                    }else if(isvalid(rx,cy,m,n) && grid[rx][cy] == 3){
                        return steps-1;
                    }
                }
            }
        }
        return 0;
        
    }
    void dfs1(int i,int j, int m,int n,vector<vector<int>>& grid){
        if(i < 0 || j < 0|| i >= m || j >= n || grid[i][j] != 1) return;
        grid[i][j] = 2;
        dfs1(i+1,j,m,n,grid);
        dfs1(i-1,j,m,n,grid);
        dfs1(i,j+1,m,n,grid);
        dfs1(i,j-1,m,n,grid);
    }
    void dfs2(int i,int j, int m,int n,vector<vector<int>>& grid){
        if(i < 0 || j < 0|| i >= m || j >= n || grid[i][j] != 1) return;
        grid[i][j] = 3;
        dfs2(i+1,j,m,n,grid);
        dfs2(i-1,j,m,n,grid);
        dfs2(i,j+1,m,n,grid);
        dfs2(i,j-1,m,n,grid);
    }
};
