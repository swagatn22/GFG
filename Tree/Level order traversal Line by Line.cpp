void levelOrder(Node* node)
{
    queue<Node *>q;
    q.push(node);
    q.push(NULL);
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        if(temp){
            cout<<temp->data<<" ";
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
        }else{
            cout<<"$"<<" ";
            if(!q.empty()){
                q.push(NULL);
            }
        }
    }
  //Your code here
}
