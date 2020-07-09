Node* reverseList(Node *head)
{
    if(!head) return head;
    Node *cur = head;
    Node *prv = NULL;
    Node *nxt = head;
    while(cur != NULL){
        nxt = cur->next;
        cur->next = prv;
        prv = cur;
        cur = nxt;
    }
    return prv;
  // Your code here
}
