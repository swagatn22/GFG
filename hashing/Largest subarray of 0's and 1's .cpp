 int MaxLen(int arr[], int n){
    int sum = 0;
    int start = 0;
    int end = 0;
    int res = 0;
    unordered_map<int,int>m;
    for(int i = 0; i< n; i++){
        if(arr[i] == 0){
            sum += -1;
        }else{
            sum += 1;
        }
        if(sum == 0){
            end = i+1;
            res = max(res,end);
        }
        if(m.find(sum) == m.end()){
            m[sum] = i+1;
        }else{
            start = m[sum];
            end = i+1;
            res = max(res,end-start);
        }
    }
    return res;
}
