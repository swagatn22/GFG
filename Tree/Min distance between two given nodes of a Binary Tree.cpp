Node* lca(Node* root ,int n1 ,int n2 )
{
   if(!root){
       return NULL;
   }
   if(root->data == n1 || root->data == n2){
       return root;
   }
   Node *left = lca(root->left,n1,n2);
   Node *right = lca(root->right,n1,n2);
   if(left && right){
       return root;
   }
   if(!left && !right){
       return NULL;
   }
   return left != NULL ? left:right;
}
int dist(Node* root, int a,int level){
    if(!root){
        return 0;
    }
    if(root->data == a){
        return level+1;
    }
    return dist(root->left,a,level+1)+dist(root->right,a,level+1);
}
int findDist(Node* root, int a, int b) {
    Node *head = lca(root,a,b);
    int d1 = dist(head,a,-1);
    int d2 = dist(head,b,-1);
    return d1+d2;
}
