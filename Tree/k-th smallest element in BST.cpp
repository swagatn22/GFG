void traverse(Node *root, int &k, int &ans){
    if(!root){
        return;
    }
    traverse(root->left,k,ans);
    k--;
    if(k == 0){
        ans = root->data;
    }
    traverse(root->right,k,ans);
}
int KthSmallestElement(Node *root, int K)
{
    int ans = -1;
    traverse(root,K,ans);
    return ans;
    //add code here.
}
