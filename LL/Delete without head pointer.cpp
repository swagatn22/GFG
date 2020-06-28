void deleteNode(Node *node)
{
    Node *temp = node;
    Node *cur;
    int x,tem;
    while(temp->next != NULL){
        x = temp->next->data;
        temp->next->data = temp->data;
        temp->data = x;
        cur = temp;
        temp = temp->next;
    }
    cur->next = NULL;
   // Your code here
}
