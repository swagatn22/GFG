vector <int> bottomView(Node *root)
{
    if(root == NULL)
        return {};
    map<int,int>m;
    queue<pair<Node *,int>>q;
    q.push({root,0});
    while(!q.empty()){
        Node *temp = q.front().first;
        int hd = q.front().second;
        m[hd] = temp->data;
        q.pop();
        if(temp->left){
            q.push({temp->left,hd-1});
        }
        if(temp->right){
            q.push({temp->right,hd+1});
        }
    }
    vector<int>res;
    for(auto it = m.begin(); it != m.end(); it++){
        res.push_back(it->second);
    }
    return res;
}
