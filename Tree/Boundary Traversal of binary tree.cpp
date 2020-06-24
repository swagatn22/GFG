void leftTraverse(Node *root,vector<int>&ans)
{
    if(!root){
        return;
    }
    if(root->left){
        ans.push_back(root->data);
        leftTraverse(root->left,ans);
    }
    else if(root->right){
        ans.push_back(root->data);
        leftTraverse(root->right,ans);
    }
}
void rightTraverse(Node *root,vector<int>&ans)
{
    if(!root){
        return;
    }
    if(root->right){
        rightTraverse(root->right,ans);
        ans.push_back(root->data);
    }
    else if(root->left){
        rightTraverse(root->left,ans);
        ans.push_back(root->data);
    }
}
void leavesTravese(Node *root,vector<int>&ans){
    if(!root){
        return;
    }
    leavesTravese(root->left,ans);
    if(root->left == NULL && root->right == NULL){
        ans.push_back(root->data);
    }
    leavesTravese(root->right,ans);
}
vector <int> printBoundary(Node *root)
{
     vector<int>ans;
     ans.push_back(root->data);
     leftTraverse(root->left,ans);
     leavesTravese(root->left,ans);
     leavesTravese(root->right,ans);
     rightTraverse(root->right,ans);
     return ans;
}
