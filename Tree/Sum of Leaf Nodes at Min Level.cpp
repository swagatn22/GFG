int minLeafSum(Node* root)
{
    if(!root){
        return 0;
    }
    int level = 1;
    int min_level = INT_MAX;
    queue<Node *>q;
    q.push(root);
    q.push(NULL);
    int sum = 0;
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        if(temp != NULL){
            if(temp->left == NULL && temp->right == NULL){
                min_level = min(level,min_level);
            }
            if(min_level == level && !temp->left && !temp->right){
                sum += temp->data;
            }
            if(temp->left != NULL) q.push(temp->left);
            if(temp->right != NULL) q.push(temp->right);
        }else{
            if(!q.empty()){
                level++;
                q.push(NULL);
            }
        }
        
    }
    return sum;
	// Code here
}
