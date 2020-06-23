int traverse(Node* root, int X, int &count, int sum){
    if(!root){
        return 0 ;
    }
    int left = traverse(root->left,X,count,sum);
    int right = traverse(root->right,X,count,sum);
    sum += left + right + root->data;
    if(sum == X){
        count++;
    }
    return sum;
}
