Node* sortedMerge(Node* head1,   Node* head2)
{
    Node *ptr1 = head1;
    Node *ptr2 = head2;
    Node *nxt1;
    if(ptr1->data <= ptr2->data){
        nxt1 = ptr1;
        ptr1 = ptr1->next;
    }else{ 
        nxt1 = ptr2;
        ptr2 = ptr2->next;
    }
    Node *carry = nxt1;
    while(ptr1  != NULL && ptr2 != NULL){
        if(ptr1->data <= ptr2->data){
          carry->next = ptr1;
          ptr1 = ptr1->next;
        }else{
            carry->next = ptr2;
            ptr2 = ptr2->next;
        }
        carry = carry->next;
    }
    if(ptr1 != NULL) carry->next = ptr1;
    else carry->next = ptr2;
    return nxt1;
    // Your Code Here
}
