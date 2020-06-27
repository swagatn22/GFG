struct node *reverse (struct node *head, int k)
{ 
    if(!head) return head;
    struct node *cur = head;
    struct node *prv = NULL;
    struct node *nxt = head;
    int count = k;
    while(count-- && cur != NULL){
        nxt = cur->next;
        cur->next = prv;
        prv = cur;
        cur = nxt;
    }
    head->next = reverse(nxt,k);
    return prv;
    // Complete this method
}
