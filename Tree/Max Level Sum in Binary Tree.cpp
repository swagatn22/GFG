int maxLevelSum(Node* root) {
    int sum = 0;
    int ans = INT_MIN;
    queue<Node *>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        if(temp){
            sum += temp->data;
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
        }else{
            ans = max(ans,sum);
            sum = 0;
            if(!q.empty()){
                q.push(NULL);
            }
        }
    }
    return ans;
}
