   long long int floorSqrt(long long int x) 
    {
        long long int left = 1;
        long int right = x;
        while(left <= right){
            long long int mid = (right-left)/2+ left;
            if(mid * mid == x){
                return mid;
            }else if(mid*mid > x){
                right = mid-1;
            }else{
                left = mid + 1;
            }
        }
        return right;
        // Your code goes here   
    }
