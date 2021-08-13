class Solution {
public:
    int isvalid(int r, int c, int m, int n){
        if( r < 0 || c < 0 || r >= m || c>= n) return 0;
        return 1;
    }
    int nearestExit(vector<vector<char>>& maze, vector<int>& e) {
        queue<pair<int,int>>q;
        int m = maze.size();
        int n = maze[0].size();
        int r = e[0];
        int c = e[1];
        int visit[m][n];
        memset(visit,0,sizeof(visit));
        visit[r][c] = 1;
        int dx[4] = {-1,0,1,0};
        int dy[4] = {0,1,0,-1};
        for(int i = 0; i < 4; i++){
            if(isvalid(r+dx[i],c+dy[i],m,n) && maze[r+dx[i]][c+dy[i]] == '.'){
                 q.push({r+dx[i],c+dy[i]});
                 visit[r+dx[i]][c+dy[i]] = 1;
            }
        }
        int steps = 0;
        while(!q.empty()){
            int s = q.size();
            steps++;
            for(int i = 0; i < s; i++){
                int r = q.front().first;
                int c = q.front().second;
                q.pop();
                for(int k = 0; k < 4; k++){
                    int rr = r + dx[k];
                    int cc = c + dy[k];
                    if(isvalid(rr,cc,m,n) && visit[rr][cc] == 0 && maze[rr][cc] == '.'){
                        visit[rr][cc] = 1;
                        q.push({rr,cc});
                    }else if(!isvalid(rr,cc,m,n)){
                        return steps;
                    }
                }
            }
        }
        return -1;
    }
};
