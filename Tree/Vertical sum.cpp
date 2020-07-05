vector <int> verticalSum(Node *root) {
    vector <int> res;
    map<int,vector<int>>m;
    queue<pair<Node *,int>>q;
    q.push({root,0});
    while(!q.empty()){
        Node *temp = q.front().first;
        int hd = q.front().second;
        q.pop();
        m[hd].push_back(temp->data);
        if(temp->left){
            q.push({temp->left,hd-1});
        }
        if(temp->right){
            q.push({temp->right,hd+1});
        }
    }
    for(auto it = m.begin(); it != m.end(); it++){
        int sum = 0;
        for(int i = 0; i < it->second.size(); i++){
            sum += it->second[i];
        }
        res.push_back(sum);
    }
    return res;
}
