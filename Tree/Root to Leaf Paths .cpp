void print(vector<int>&vec){
    for(int i = 0; i < vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    cout<<"#";
}
void traverse(Node* root,vector<int>vec){
    if(!root){
        return;
    }
    vec.push_back(root->data);
    if(root->left == NULL && root->right == NULL){
        print(vec);
    }
    traverse(root->left,vec);
    traverse(root->right,vec);
}
void printPaths(Node* root)
{
    vector<int>vec;
    traverse(root,vec);
    cout<<endl;
    // Code here
}
