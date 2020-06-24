void traverse(Node *root, int &level,int max_level){
    if(!root) return;
    if(level < max_level){
        cout<<root->data<<" ";
        level = max_level;
    }
    traverse(root->left,level,max_level+1);
    traverse(root->right,level,max_level+1);
}
void leftView(Node *root)
{
    if(!root) return;
    int level = 0; 
    traverse(root,level,1); 
  
}
