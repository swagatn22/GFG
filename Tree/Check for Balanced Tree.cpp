int traverse(Node *root, int *bal){
    if(!root){
        return  0;
    }
    int left = traverse(root->left,bal);
    int right = traverse(root->right,bal);
    if(abs(left-right) > 1){
        *bal = 0;
    }
    return max(left,right)+1;
}
bool isBalanced(Node *root)
{
    int bal = 1;
    traverse(root,&bal);
    return bal;
}
