void intersection(Node **head1, Node **head2,Node **head3)
{
    Node *ptr1 = *head1;
    Node *ptr2 = *head2;
    while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1->val == ptr2->val){
            push(head3,ptr1->val);
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }else if(ptr1->val > ptr2->val){
            ptr2 = ptr2->next;
        }else{
            ptr1 = ptr1->next;
        }
    }
    // Your Code Here
}
