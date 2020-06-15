Node* findIntersection(Node* head1, Node* head2)
{
    unordered_map<int,int>m;
    Node *temp = head2;
    while(temp != NULL){
        m[temp->data]++;
        temp = temp->next;
    }
    Node *newhead = NULL;
    Node *carry = NULL;
    temp = head1;
    while(temp != NULL){
        if(m.find(temp->data) != m.end()){
            if(newhead == NULL){
                newhead = new Node(temp->data);
                carry = newhead;
            }else{
                carry->next = new Node(temp->data);
                carry = carry->next;
            }
        }
        temp = temp->next;
    }
    //carry->next = NULL;
    return newhead;
}
