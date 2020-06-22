Node* LCA(Node *root, int n1, int n2)
{
    if(!root){
        return NULL;
    }
    if(root->data > max(n1,n2)){
        return LCA(root->left,n1,n2);
    }else if(root->data < min(n1,n2)){
        return LCA(root->right,n1,n2);
    }else{
        return root;
    }
   //Your code here
}
