vector <int> countDistinct (int A[], int n, int k)
{
    unordered_map<int,int>m;
    int count = 0;
    for(int i = 0; i < k; i++){
        if(m.find(A[i]) == m.end()) count++;
        m[A[i]]++;
    }
    vector<int>res;
    res.push_back(count);
    for(int i = k;i <n;i++){
        if(m[A[i-k]] == 1){
            count--;
        }
        m[A[i-k]]--;
        if(m[A[i]] == 0) {
            count++;
        }
        m[A[i]]++;
        res.push_back(count);
    }
    return res;
}
