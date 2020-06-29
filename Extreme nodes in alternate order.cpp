void printExtremeNodes(Node* root)
{
    if(!root){
        return;
    }
    int flag = 1;
    stack<Node *>s1;
    stack<Node *>s2;
    s1.push(root);
    cout<<root->data<<" ";
    Node *temp;
    Node *ans;
    while(!s1.empty()){
        temp = s1.top();
        s1.pop();
        if(flag){
            if(temp->right) s2.push(temp->right);
            if(temp->left) s2.push(temp->left);
        }else{
            if(temp->left) s2.push(temp->left);
            if(temp->right) s2.push(temp->right);
        }
        if(s1.empty()){
            if(!s2.empty()){
                ans = s2.top();
                cout<<ans->data<<" ";
            }
            flag = 1 - flag;
            swap(s2,s1);
        }
    }
    // Your code here
}
