Node *RemoveHalfNodes(Node *root)
{
    if(!root) return NULL;
    root->left = RemoveHalfNodes(root->left);
    root->right = RemoveHalfNodes(root->right);
     if(root->left && root->right == NULL){
        return root->left;
    }
    if(root->left == NULL && root->right){
        return root->right;
    }
    return root;
   //add code here.
}
