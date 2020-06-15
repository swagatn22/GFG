Node* pairWiseSwap(struct Node* head) {
    // The task is to complete this method
    if(!head)
        return NULL;
    if(head->next == NULL)
        return head;
    struct Node* cur = head;
    struct Node* nxt = head->next;
    struct Node* prv = head;
    int k = 1;
    while(k-- && cur != NULL){
        cur->next = nxt->next;
        nxt->next = cur;
        prv = cur;
        cur= cur->next;
    }
    prv->next = pairWiseSwap(cur);
    return nxt;
}
