bool isPalindrome(Node *head)
{
    Node *head1 = head;
    Node *prv = NULL;
    Node *curr = head;
    Node *nxt = head;
    Node *fast = head->next;
    Node *slow = head;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    if(fast != NULL) {
        slow = slow->next;
        curr = slow;
    }
    else curr = slow->next;
    while(curr != NULL){
        nxt = curr->next;
        curr->next =prv;
        prv = curr;
        curr = nxt;
    }
    while(prv != NULL){
        if(prv->data != head1->data) return false;
        prv = prv->next;
        head1 = head1->next;
    }
    return true;
    //Your code here
}
