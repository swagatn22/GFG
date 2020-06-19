vector <int> zigZagTraversal(Node* root)
{
    vector<int>res;
    int flag = 1;
    stack<Node *> s1;
    stack<Node *> s2;
    Node *temp;
    s1.push(root);
    while(!s1.empty()){
        temp = s1.top();
        s1.pop();
        if(temp){
            res.push_back(temp->data);
            if(flag){
            if(temp->left != NULL) s2.push(temp->left);
            if(temp->right != NULL) s2.push(temp->right);
            }else{
                if(temp->right != NULL) s2.push(temp->right);
                if(temp->left != NULL) s2.push(temp->left);
            }
        }
        if(s1.empty()){
            flag = 1 - flag;
            swap(s2,s1);
        }
    }
	return res;
}
