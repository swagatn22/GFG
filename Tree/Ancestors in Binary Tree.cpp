bool printAncestors(struct Node *root, int target)
{
    if(!root){
        return false;
    }
    bool left = printAncestors(root->left,target);
    bool right = printAncestors(root->right,target);
    if(left || right)
        cout<<root->data<<" ";
    return (root->data == target || left || right);
}
