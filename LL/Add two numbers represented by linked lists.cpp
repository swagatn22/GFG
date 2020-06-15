Node* addTwoLists(Node* first, Node* second) {
   
    Node *p = first;
    Node *f;
    Node *q = second;
    int count=0,count1=0;
    while(p != NULL){
        p = p->next;
        count++;
    }
    p = first;
    while(q != NULL){
        q = q->next;
        count1++;
    }
    q = second;
    if(count > count1) f = p;
    else f = q;
    Node *t = f;
    int k = 0,carry,sum;
    Node *temp;
    while(p != NULL || q != NULL){
        carry = k/10;
        k = 0;
        if(p){
            k += p->data;
            p = p->next;
        }
        if(q){
            k += q->data;
            q = q->next;
        }
        k += carry;
        sum = k % 10;
        t->data = sum;
        if(t->next == NULL) temp = t;
        t = t->next;
    }
    if(k>=10){
        temp ->next = new Node(carry);
    }
    return f;
}
