int isSumProperty(Node *root)
{
    if(!root || !root->left && !root->right)
        return 1;
    int l = root->left != NULL ? root->left->data :0;
    int r = root->right != NULL ? root->right->data:0;
    return ((root->data == l + r)&& isSumProperty(root->left) && 
                                    isSumProperty(root->right));
}
