int search(int arr[],int ele, int n){
    int left = 0;
    int right = n-1;
    int mid;
    int res;
    while(left <= right){
        mid = (right-left)/2+left;
        if(arr[mid] > ele){
            res = mid;
            right = mid-1;
        }else{
            left = mid+1;
        }
    }
    return res;
}
vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                             int m, int n)
{
    sort(arr2,arr2+n);
    vector<int>res;
    for(int i = 0; i < m; i++){
        if(arr1[i] < arr2[0]){
            res.push_back(0);
        }else if(arr1[i] >= arr2[n-1]){
            res.push_back(n);
        }else{
            int id = search(arr2,arr1[i],n);
            res.push_back(id);
        }
    }
    return res;
}
