bool compare(pair<int,int>&a,pair<int,int>&b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    return a.first > b.first;
}
vector<int> sortByFreq(int arr[],int n)
{
    unordered_map<int,int>map;
    for(int i = 0; i < n; i++){
        map[arr[i]]++;
    }
    vector<pair<int,int>>res;
    for(auto it = map.begin(); it != map.end(); it++){
        res.push_back({it->second,it->first});
    }
    sort(res.begin(),res.end(),compare);
    vector<int>ans;
    for(int i = 0; i< res.size(); i++){
        int k = res[i].first;
        while(k--){
            ans.push_back(res[i].second);
        }
    }
    return ans;
}
