void dfs(vector<int> A[],int i, int j,int N, int M){
    if(i < 0 || i >= N || j < 0 || j >= M|| A[i][j] != 1)
        return;
    A[i][j] = 2;
    dfs(A,i+1,j,N,M);
    dfs(A,i-1,j,N,M);
    dfs(A,i,j+1,N,M);
    dfs(A,i,j-1,N,M);
    dfs(A,i-1,j-1,N,M);
    dfs(A,i-1,j+1,N,M);
    dfs(A,i+1,j+1,N,M);
    dfs(A,i+1,j-1,N,M);
}
int findIslands(vector<int> A[], int N, int M) {
    int count = 0;
    for(int i =0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(A[i][j] == 1){
                dfs(A,i,j,N,M);
                count++;
            }
        }
    }
    return count;
    // Your code here
}
