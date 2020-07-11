int getMaxWidth(Node* root)
{
    queue<Node *>q;
    q.push(root);
    q.push(NULL);
    int ans =1;
    int count = 0;
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        if(temp != NULL){
            count++;
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }else{
            ans = max(ans,count);
            count = 0;
            if(!q.empty()){
                q.push(NULL);
            }
        }
    }
    return ans;
   // Your code here
}
