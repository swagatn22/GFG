void traverse(Node *root, int low, int high,vector<int>&ans){
    if(!root)
        return;
    traverse(root->left,low,high,ans);
    if(root->data >= low && root->data <= high){
        ans.push_back(root->data);
    }
    traverse(root->right,low,high,ans);
}
vector<int> printNearNodes(Node *root, int low, int high)
{
    vector<int>ans;
    traverse(root,low,high,ans);
    return ans;
  // your code goes here   
}
