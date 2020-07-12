void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    Node *slow = head;
    *head1_ref = head;
    Node *fast = head->next;
    Node *prv;
    while(fast != head && fast->next != head){
        slow = slow->next;
        prv = fast->next;
        fast = fast->next->next;
    }
    *head2_ref = slow->next;
    slow->next = *head1_ref; 
    if(fast != head){
        fast->next = *head2_ref;
    }else{
        prv->next = *head2_ref;
    }
    //printList(*head1_ref);
//    printList(*head2_ref);
    // your code goes here
}
