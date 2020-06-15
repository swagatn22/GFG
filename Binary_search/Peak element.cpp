int peakElement(int arr[], int n)
{
    int mid;
    int left = 0;
    int right = n-1;
    while(left <= right){
        mid = (right-left)/2+left;
        if(mid > 0 && mid < n-1){
            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
                return mid;
            }
            else if(arr[mid-1] < arr[mid]){
                left = mid+1;
            }else{
                right = mid-1;
            }
        }else if(mid == 0){
            if(arr[mid] > arr[mid+1]){
                return 0;
            }else{
                return 1;
            }
        }else if(mid == n-1){
            if(arr[mid] > arr[mid-1]){
                return mid;
            }else{
                return mid-1;
            }
        }
    }
    
}
