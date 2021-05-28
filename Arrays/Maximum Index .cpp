nt maxIndexDiff(int arr[], int n) 
    { 
        vector<pair<int,int>>res;
        for(int i = 0; i < n; i++){
            res.push_back({arr[i],i});
        }
        sort(res.begin(),res.end());
        int id = res[0].second;
        int ans = 0;
        for(int i = 1; i < res.size(); i++){
            ans = max(ans,res[i].second-id);
            id = min(id,res[i].second);
        }
        return ans;
        // Your code here
        
    }
