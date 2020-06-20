int traverse(Node* root, int &tilt){
    if(!root){
        return 0;
    }
    int left = traverse(root->left,tilt);
    int right = traverse(root->right,tilt);
    tilt += abs(left-right);
    return left+right+root->val;
}
int tiltTree(Node* root)
{
    int tilt = 0;
    traverse(root,tilt);
    return tilt;
	// Code here
}
