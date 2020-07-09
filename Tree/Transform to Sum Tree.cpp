int traverse(Node *root, int sum){
    if(!root){
        return 0;
    }
    int left = traverse(root->left,sum);
    int right = traverse(root->right,sum);
    int val = root->data;
    sum = left+right;
    root->data = sum;
    return sum+val;
}
void toSumTree(Node *node)
{
    int sum = 0;
    int res = traverse(node,sum);
    // Your code here
}
