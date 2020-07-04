int findLongestConseqSubseq(int arr[], int n)
{
    unordered_map<int,int>m;
    for(int  i = 0; i < n; i++){
        m[arr[i]]++;
    }
    int ans = INT_MIN;
    for(int i = 0; i < n; i++){
        if(m.find(arr[i]-1) == m.end()){
            int num = arr[i];
            while(m.find(num++) != m.end()){
                ans = max(ans,num-arr[i]);
            }
        }
    }
    return ans;
}
