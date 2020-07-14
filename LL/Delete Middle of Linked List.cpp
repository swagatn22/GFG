Node* deleteMid(Node* head) {
    Node *prv = head;
    Node *slow = head;
    Node *fast = head;
    while(fast != NULL  && fast->next != NULL){
        prv = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    prv->next = slow->next;
    return head;
    // Your Code Here
}
