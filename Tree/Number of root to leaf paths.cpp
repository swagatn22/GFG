void traverse(Node *root, int path,map<int,int>&m){
    if(!root){
        return;
    }
    if(!root->left && !root->right){
        m[path]++;
    }
    traverse(root->left,path+1,m);
    traverse(root->right,path+1,m);
}
void pathCounts(Node *root)
{
    int path = 1;
    map<int,int>m;
    traverse(root,path,m);
    for(auto it = m.begin(); it != m.end(); it++){
        cout<<it->first<<" "<<it->second<<" "<<"$";
    }
}
