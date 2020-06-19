void traverse(Node *root, int &k, int &ans){
    if(!root){
        return;
    }
    traverse(root->right,k,ans);
    k--;
    if(k == 0){
        ans = root->data;
    }
    traverse(root->left,k,ans);
}
int kthLargest(Node *root, int K)
{
    int ans = -1;
    traverse(root,K,ans);
    return ans;
}
