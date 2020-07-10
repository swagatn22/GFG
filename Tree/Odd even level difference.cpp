int getLevelDiff(Node *root)
{
    int even = 0;
    int odd = 0;
    int sum = 0;
    int flag = 1;
    queue<Node *>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        if(temp != NULL){
            sum += temp->data; 
            if(temp->left != NULL) q.push(temp->left);
            if(temp->right != NULL) q.push(temp->right);
        }else{
            if(flag){
                even += sum; 
            }else{
                odd +=sum;
            }
            flag = !flag;
            sum = 0;
            if(!q.empty()){
                q.push(NULL);
            }
        }
    }
    return even-odd;
   //Your code here
}
