Node* segregate(Node *head) {
    int zeros = 0;
    int ones = 0;
    int twos = 0;
    Node *temp = head;
    while(temp != NULL){
        if(temp->data == 0) zeros++;
        if(temp->data == 1) ones++;
        if(temp->data == 2) twos++;
        temp = temp->next;
    }
    temp = head;
    while(zeros--){
        temp->data = 0;
        temp = temp->next;
    }
    while(ones--){
        temp->data = 1;
        temp = temp->next;
    }
    while(twos--){
        temp->data = 2;
        temp = temp->next;
    }
    return head;
    // Add code here
    
}
