void connect(Node *p)
{
    queue<Node *>q;
    q.push(p);
    int size;
    while(!q.empty()){
        int s = q.size();
        for(int i = 1; i <= s; i++){
            Node *temp = q.front();
            q.pop();
            if(s == 1 || i == s){
                temp->nextRight = NULL;
            }else{
                 temp->nextRight = q.front();
            }
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
        
    }
    
   // Your Code Here
}
