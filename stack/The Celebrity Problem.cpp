int getId(int mat[MAX][MAX], int n)
{
    stack<int>s;
    for(int i = 0; i < n; i++){
        s.push(i);
    }
    int a,b;
    a = s.top();
    s.pop();
    b = s.top();
    s.pop();
    while(s.size() > 1){
        if(mat[a][b]){
            a = s.top();
            s.pop();
        }else{
            b = s.top();
            s.pop();
        }
    }
    int c;
    if(!s.empty()){
        c = s.top();
        if(mat[c][a]){
            c = a;
        }
        if(mat[c][b]){
            c = b;
        }
    }else{
        if(mat[a][b] == 1){
            c = b;
        }else{
            c = a;
        } 
    }
    for(int i = 0; i < n; i++){
        if(i != c && (mat[c][i] == 1 || mat[i][c] == 0))
        return -1;
    }
  
