int traverse(Node *root, int &ans){
    if(!root){
        return INT_MAX;
    }
    int left = traverse(root->left,ans);
    int right = traverse(root->right,ans);
    if(left != INT_MAX){
        ans = max(ans,root->data-left);
    }
    if(right != INT_MAX){
        ans = max(ans,root->data-right);
    }
    return min(root->data,min(left,right));
}
int maxDiff(Node* root)
{
    int ans = INT_MIN;
    traverse(root,ans);
    return ans;
    
}
