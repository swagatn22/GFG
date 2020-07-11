int evalTree(node* root) {
     if(!root){
        return 0;
    }
     int left = evalTree(root->left);
     int right = evalTree(root->right);
     if(root->data ==  "*"){
         int res = left*right;
         root->data = to_string(res);
     }else if(root->data == "+"){
         int res = left+right;
         root->data = to_string(res);
     }else if(root->data == "-"){
         int res = left-right;
         root->data = to_string(res);
     }else if(root->data == "/") {
         int res = left/right;
         root->data = to_string(res);
     }
     return stoi(root->data);
     
}
