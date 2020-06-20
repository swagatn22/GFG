bool ismirror(Node* root1,Node* root2){
    if(!root1 && !root2){
        return true;
    }
    if(!root1 || !root2){
        return false;
    }
    return (ismirror(root1->left,root2->right) && 
            ismirror(root1->right,root2->left));
}
bool IsFoldable(Node* root)
{
    if(root == NULL)
        return true;
    return ismirror(root->left,root->right);
    // Your code goes here
}
