void traverse(Node* root,vector<int>&num){
        if(!root){
            return;
        }
        traverse(root->left,num);
        num.push_back(root->data);
        traverse(root->right,num);
 }
bool isBST(Node* root) {
    // Your code here
    if(!root) return true;
        vector<int>num;
        traverse(root,num);
        for(int i =0; i<num.size()-1;i++){
            if(num[i] >= num[i+1]){
                return false;
            }
        }
        return true;
}
