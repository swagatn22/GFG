 bool dfs(vector<vector<char>>& board,int i, int j, int m,int n,int k,string word){
        if(i < 0 || i >= m || j < 0 || j >= n || board[i][j] != word[k]){
            return 0;
        }
        if(k == word.length()-1) return true;
        char temp = board[i][j];
        board[i][j] = ' ';
        k++;
        bool res =(dfs(board,i+1,j,m,n,k,word) || 
              dfs(board,i,j+1,m,n,k,word) ||
              dfs(board,i-1,j,m,n,k,word) ||
              dfs(board,i,j-1,m,n,k,word) );
        board[i][j] = temp;
        return res;
    }
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
        int m = board.size();
        int n = board[0].size();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(board[i][j] == word[0]){
                    if(dfs(board,i,j,m,n,0,word)) return true;
                }
            }
        }
        return false;
    }
