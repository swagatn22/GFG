Node* deleteAllOccurances(Node *head,int x)
{
    while(head->data == x){
        head = head->next;
    }
    Node *temp = head;
    Node *prv = head;
    while(temp != NULL){
        if(temp->data == x){
            prv->next = temp->next;
            temp = prv->next;
        }else{
            prv = temp;
            temp = temp->next;
        }
    }
    return head;
    //Your code here
}
