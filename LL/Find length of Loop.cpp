int countNodesinLoop(struct Node *head)
{
    Node *fast = head->next;
    Node *slow = head;
    while(fast != slow){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == NULL || fast->next == NULL) return 0;
    }
    slow = slow->next;
    int count = 1;
    while(slow != fast){
        count++;
        slow = slow->next;
    }
    return count;
     // Code here
}
