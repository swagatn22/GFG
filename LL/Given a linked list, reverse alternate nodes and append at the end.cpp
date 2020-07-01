Node *reverse(Node *head){
    Node *cur = head;
    Node *prv = NULL;
    Node *nxt = cur;
    while(cur != NULL){
        nxt = cur->next;
        cur->next = prv;
        prv = cur;
        cur = nxt;
    }
    return prv;
}
void rearrange(struct Node *odd)
{
    if(!odd || !odd->next) return;
    Node *head1 = odd;
    Node *head2 = odd->next;
    Node *carry1 = head1;
    Node *carry2 = head2;
    Node *prv;
    while(carry1 != NULL && carry1->next != NULL){
        prv = carry1;
        carry1->next = carry2->next;
        carry1 = carry1->next;;
        if(carry1 != NULL && carry1->next != NULL){
            carry2->next = carry1->next;
            carry2 = carry2->next;
        }
    }
    if(carry1){
        prv = carry1;
    }
    carry2->next = NULL;
    head2 = reverse(head2);
    prv->next = head2;
}
