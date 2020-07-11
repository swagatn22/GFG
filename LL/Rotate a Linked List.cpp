Node* rotate(Node* head, int k) {
    Node *temp = head;
    while(temp->next != NULL){
        temp  = temp->next;
    }
    Node *prv;
    Node *newhead = head;
    while(k--){
        prv = newhead;
        newhead = newhead->next;
    }
    if(newhead == NULL){
        return head;
    }
    prv->next = NULL;
    temp->next = head;
    return newhead;
    
    // Your code here
}
