bool traverse(Node *root, int val,vector<int>&ans){
    if(!root){
        return false;
    }
    bool left = traverse(root->left,val,ans);
    bool right = traverse(root->right,val,ans);
    if(left || right){
        ans.push_back(root->data);
    }
    return(root->data == val || left || right);
}
int kthAncestor(Node *root, int k, int node)
{
    vector<int>ans;
    traverse(root,node,ans);
    if(k > ans.size() || ans.size() == 0){
        return -1;
    }
    return ans[k-1];
    // Code here
}
