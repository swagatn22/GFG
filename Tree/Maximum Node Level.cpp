int maxNodeLevel(Node *root)
{
    if(!root){
        return 0;
    }
    int level = 0;
    int count = 0;
    int max_count = INT_MIN;
    int ans = 0;
    queue<Node *>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        if(temp != NULL){
            count++;
            if(temp->left != NULL) q.push(temp->left);
            if(temp->right != NULL) q.push(temp->right);
        }else{
            if(max_count < count){
                max_count = count;
                ans = level;
                count = 0;
            }
            if(!q.empty()){
                level++;
                q.push(NULL);
            }
        }
        
    }
    return ans;
 // Add your code here
}
