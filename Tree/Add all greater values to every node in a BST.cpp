void traverse(Node *root, int &val){
    if(!root){
        return;
    }
    traverse(root->right,val);
    root->data += val;
    val = root->data;
    traverse(root->left,val);
}
Node* modify(Node *root)
{
    int val = 0;
    traverse(root,val);
    return root;
}
