void printKdistance(struct Node *root, int k)
{
    int level = 0;
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        if(temp != NULL){
            if(level == k){
                cout<<temp->data<<" ";
            }
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        else{
            if(!q.empty()){
                q.push(NULL);
                level++;
            }
        }
    }
  // Your code here
}
