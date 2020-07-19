void traverse(Node *root, int K, int &diff){
    if(!root){
        return;
    }
    traverse(root->left,K,diff);
    diff = min(diff,abs(root->data-K));
    traverse(root->right,K,diff);
}
// Return the minimum absolute difference between any tree node and the integer K
int minDiff(Node *root, int K)
{
    int diff = INT_MAX;
    traverse(root,K,diff);
    return diff;
}
