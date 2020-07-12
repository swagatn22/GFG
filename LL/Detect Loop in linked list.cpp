int detectloop(Node *head) {
    Node *fast = head->next;
    Node *slow = head;
    while(fast != slow){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == NULL || fast->next == NULL) return 0;
    }
    return 1;

    // your code here
}
