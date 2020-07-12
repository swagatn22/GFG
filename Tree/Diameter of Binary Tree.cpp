int traverse(Node *node, int &ans){
    if(!node){
        return 0;
    }
    int left = traverse(node->left,ans);
    int right = traverse(node->right,ans);
    ans = max(ans,left+right+1);
    return max(left,right)+1;
}
int diameter(Node* node) {
    int ans = 0;
    traverse(node,ans);
    return ans;
    // Your code here
}
