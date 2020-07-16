void traverse(Node *root, int l, int h, int &count){
    if(!root)
        return;
    traverse(root->left,l,h,count);
    if(l <= root->data && root->data <= h){
        count++;
    }
    traverse(root->right,l,h,count);
}
int getCountOfNode(Node *root, int l, int h)
{
    int count = 0;
    traverse(root,l,h,count);
    return count;
  // your code goes here   
}
