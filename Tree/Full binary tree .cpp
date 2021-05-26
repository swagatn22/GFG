bool isFullTree (struct Node* root)
{
    if(!root) return true;
    if(root->left == NULL && root->right == NULL) return true;
    if(root->left == NULL && root->right || root->left  && root->right == NULL)
        return false;
    bool left = isFullTree(root->left);
    bool right = isFullTree(root->right);
    return left && right;
//add code here.
}
