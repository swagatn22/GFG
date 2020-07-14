int transitionPoint(int arr[], int n) {
    int left = 0;
    int right = n-1;
    int mid;
    int ans = -1;
    while(left <= right){
        mid = (right-left)/2+left;
        if(arr[mid] == 1){
            ans = mid;
            right = mid-1;
        }else{
            left = mid+1;
        }
    }
    return ans;
    // code here
}
