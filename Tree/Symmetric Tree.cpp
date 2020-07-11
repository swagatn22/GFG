bool ismirror(struct Node* root1, struct Node* root2){
    if(root1 == NULL && root2 == NULL){
        return 1;
    }
    if(root1 == NULL || root2 == NULL){
        return 0;
    }
    return(root1->data == root2->data && ismirror(root1->left,root2->right) 
                        && ismirror(root1->right,root2->left));
}
// return true/false denoting whether the tree is Symmetric or not
bool isSymmetric(struct Node* root)
{
    if(!root){
        return 1;
    }
    return ismirror(root->left,root->right);
	// Code here
}
