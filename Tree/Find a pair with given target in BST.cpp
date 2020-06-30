void traverse( Node *root, int target,unordered_map<int,int>&m,int &ans){
    if(!root){
        return;
    }
    if(m.find(target-root->data) != m.end()){
        ans = 1;
    }else{
        m[root->data]++;
    }
    traverse(root->left,target,m,ans);
    traverse(root->right,target,m,ans);
}
bool isPairPresent(struct Node *root, int target)
{
    unordered_map<int,int>m;
    int ans = 0;
    traverse(root,target,m,ans);
    return ans;
}
