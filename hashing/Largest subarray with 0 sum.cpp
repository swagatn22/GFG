int maxLen(int A[], int n)
{
    unordered_map<int,int>m;
    int sum = 0; 
    int len = 0;
    for(int i = 0; i < n;i++){
        sum += A[i];
        if(sum == 0){
            len = max(len,i+1);
        }
        if(m.find(sum) != m.end()){
            len = max(len,(i-m[sum]));
        }else{
            m[sum] = i;
        }
    }
    return len;
    // Your code here
}
