Node *removeDuplicates(Node *root)
{
    Node *cur = root;
    Node *nxt  = root->next;
    while(nxt != NULL){
        if(cur->data == nxt->data){
            cur->next = nxt->next;
        }else{
            cur = cur->next;
        }
        nxt = nxt->next;
    }
    return root;
 // your code goes here
}
