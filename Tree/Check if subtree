bool isIdentical(Node *root1, Node *root2){
    if(!root1 && !root2){
        return true; 
    }
    if(!root1 || !root2){
        return false;
    }
    return(root1->data == root2->data &&
            isIdentical(root1->left,root2->left)&&
            isIdentical(root1->right,root2->right));
}
bool isSubTree(Node* T, Node* S) {
    if(!T){
        return false;
    }
    return isIdentical(T,S) ||isSubTree(T->left,S) || isSubTree(T->right,S) ;
}
