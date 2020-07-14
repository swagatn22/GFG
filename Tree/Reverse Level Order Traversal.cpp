void reversePrint(Node *root)
{
    stack<int>s;
    queue<Node *>q;
    q.push(root);
    while(!q.empty()){
        Node *temp = q.front();
        s.push(temp->data);
        q.pop();
        if(temp->right)q.push(temp->right);
        if(temp->left) q.push(temp->left);
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    //Your code here
}
