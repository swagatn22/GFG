int ans = 0;
int traverse(Node *root, int k){
    if(!root){
        return 0;
    }
    int left  = traverse(root->left,k);
    int right = traverse(root->right,k);
    if(left+right == k){
        cout<<root->data<<" ";
        ans = 1;
    }
    if(root->left == NULL && root->right == NULL){
        return 1;
    }
    return (left+right);
}
void btWithKleaves(Node *ptr, int k)
{ 
    traverse(ptr,k);
    if(ans == 0){
        cout<<-1;
    }
    ans = 0;
    cout<<endl;
}
