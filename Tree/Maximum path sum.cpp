int traverse(Node *root, int &sum){
    if(!root){
        return INT_MIN;
    }
    if(root->left == NULL && root->right == NULL){
        return root->data;
    }
    int left = traverse(root->left,sum);
    int right = traverse(root->right,sum);
    if(root->left && root->right){
        sum = max(sum, left + right + root->data);
    }
   return max(left, right) + root->data;
}
int maxPathSum(Node *root) {
    // code here
    int sum = INT_MIN;
    traverse(root,sum);
    return sum;
}
