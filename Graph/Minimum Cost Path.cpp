using namespace std;
typedef pair<int,pair<int,int>>pi;
int isvalid(int x, int y,vector<vector<int>>&vec){
    if(x >= 0 && x < vec.size() && y >= 0 && y <vec.size()){
        return 1;
    }
    return 0;
}
int dijkstra(vector<vector<int>>&vec,vector<vector<int>>&path){
    priority_queue<pi,vector<pi>,greater<pi>>pq;
    int m = vec.size(); 
    int n = vec.size();
    pq.push({vec[0][0],{0,0}});
    path[0][0] = vec[0][0];
    while(!pq.empty()){
        int dis = pq.top().first;
        int x = pq.top().second.first;
        int y = pq.top().second.second;
        pq.pop();
        int dx [] = {-1,0,0,1};
        int dy [] = {0,-1,1,0};
        for(int i = 0; i < 4; i++){
            int r = x + dx[i];
            int c = y + dy[i];
            if(isvalid(r,c,vec)){
                if( path[r][c] > vec[r][c]+dis){
                    path[r][c] = vec[r][c]+dis;
                    pq.push({path[r][c],{r,c}});
                }
            }
            
        }
    }
    return path[m-1][n-1];
    
}
int main() {
	//code
	int t;
	cin>>t;
	int n;
	while(t--){
	    cin>>n;
	    vector<vector<int>>vec(n,vector<int>(n));
	    for(int i =0; i < n; i++){
	        for(int j =0; j < n; j++){
	            cin>>vec[i][j];
	        }
	    }
	    vector<vector<int>>path(n,vector<int>(n,INT_MAX));
	    cout<<dijkstra(vec,path)<<endl;
	}
	return 0;
}
