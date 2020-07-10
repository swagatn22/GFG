struct Node *reverse(Node *node){
    Node *cur = node;
    Node *nxt;
    Node *prv = NULL;
    while(cur != NULL){
        nxt = cur->next;
        cur->next = prv;
        prv = cur;
        cur = nxt;
    }
    return prv;
}
struct Node * merge(Node *node1,Node *node2){
    Node *ptr1 = node1;
    Node *ptr2 = node2;
    Node *newhead;
    if(ptr1->data >= ptr2->data){
        newhead = ptr1;
        ptr1 = ptr1->next;
    }else{
        newhead = ptr2;
        ptr2 = ptr2->next;
    }
    Node *carry = newhead;
    while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1->data >= ptr2->data){
            carry->next = ptr1;
            ptr1 = ptr1->next;
        }else{
            carry->next = ptr2;
            ptr2 = ptr2->next;
        }
        carry = carry->next;
    }
    if(ptr1 != NULL){
        carry->next = ptr1;
    }else{
        carry->next = ptr2;
    }
    return newhead;
}
struct Node * mergeResult(Node *node1,Node *node2)
{
    Node *head1 = reverse(node1);
    Node *head2 = reverse(node2);
    Node *head = merge(head1,head2); 
    return head;
}
