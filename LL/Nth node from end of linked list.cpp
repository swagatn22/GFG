int getNthFromLast(Node *head, int n)
{
    Node *fast = head;
    while(n--){
        fast = fast->next;
        if(fast == NULL && n)
            return -1;
            
    }
    Node *slow= head;
    while(fast != NULL){
        slow = slow->next;
        fast = fast->next;
    }
    return slow->data;
       // Your code here
}
