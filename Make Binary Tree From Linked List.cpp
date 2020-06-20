void convert(Node *head, TreeNode *&root) {
    vector<TreeNode *>vec;
    Node *temp = head;
    while(temp != NULL){
        TreeNode *node  = new TreeNode(temp->data);
        vec.push_back(node);
        temp = temp->next;
    }
    for(int i = 0; i < vec.size()/2; i++){
        if(2*i+1 < vec.size())vec[i]->left = vec[2*i+1];
        if(2*i+2 < vec.size())vec[i]->right = vec[2*i+2];
    }
    root = vec[0];
    // Your code here
}
