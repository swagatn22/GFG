int verticalWidth(Node* root)
{
    if(!root){
        return 0;
    }
    int count = 0;
    map<int,int>m;
    queue<pair<Node*,int>>q;
    q.push({root,0});
    while(!q.empty()){
        Node *temp = q.front().first;
        int hd =  q.front().second;
        q.pop();
        if(m.find(hd) == m.end()){
            count++;
            m[hd]++;
        }
        if(temp->left != NULL){
            q.push({temp->left,hd-1});
        }
        if(temp->right != NULL){
            q.push({temp->right,hd+1});
        }
    }
    return count;
}
