void leftView(Node *root)
{
    if(!root) return;
    cout<<root->data<<" ";
    if(root->left){
        leftView(root->left);
    }else{
        leftView(root->right);
    }
}
