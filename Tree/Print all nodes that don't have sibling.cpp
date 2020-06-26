void traverse(Node *root,vector<int> &res){
    if(!root){
        return;
    }
    if(root->left == NULL && root->right != NULL){
        res.push_back(root->right->data);
    }
    if(root->left != NULL && root->right == NULL){
        res.push_back(root->left->data);
    }
    traverse(root->left,res);
    traverse(root->right,res);
}
void printSibling(Node* node)
{
    vector<int>res;
    traverse(node,res);
    if(res.size() == 0){
        cout<<-1;
    }
    sort(res.begin(),res.end());
    for(int i = 0; i < res.size(); i++){
        cout<<res[i]<<" ";
    }
}
