int NeedleinHaystack(string haystack, string needle) 
{
    int m = haystack.size();
    int n = needle.size();
    if(n == 0) return 0;
    for(int i = 0; i< m; i++){
        if(haystack[i] == needle[0]){
            int j = i;
            int k;
            for(k = 0; k < n && j < m; k++){
                if(haystack[j] != needle[k]){
                    break;
                }
                j++;
            }
            if(k == n) return i;
        }
    }
    return -1;
    // Your code goes here 
}
