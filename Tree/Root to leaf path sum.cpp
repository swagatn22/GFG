bool hasPathSum(Node *root, int sum) {
    if(!root || sum == 0){
        return 0;
    }
    if(root->left == NULL && root->right == NULL){
        return sum-root->data == 0; 
    }
    return (hasPathSum(root->left,sum-root->data) || 
            hasPathSum(root->right,sum-root->data));
    // Your code here
}
