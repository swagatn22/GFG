struct node* makeUnion(struct node* head1, struct node* head2)
{
    set<int>s;
    node *temp = head1;
    while(temp != NULL){
        s.insert(temp->data);
        temp = temp->next;
    }
    temp = head2;
    while(temp != NULL){
        s.insert(temp->data);
        temp = temp->next;
    }
    struct node *head = new node(0);
    struct node *carry = head;
    for(auto it = s.begin(); it != s.end(); it++){
        carry->next = new node(*it);
        carry = carry->next;
    }
    return head->next;
    // code here
}
