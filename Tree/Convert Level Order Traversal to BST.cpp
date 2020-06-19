Node *insert(Node *root, int val){
    if(root == NULL){
        Node *head = new Node(val);
        return head;
    }
    if(root->data < val){
        root->right = insert(root->right,val);
    }else{
       root->left = insert(root->left,val);
    }
    return root;
}
Node* constructBst(int arr[], int n)
{
    Node *root = NULL;
    for(int i = 0; i < n; i++){
        root = insert(root,arr[i]);
    }
    return root;
	
}
