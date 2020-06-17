int countPairs(struct Node* head1, struct Node* head2, int x) {
    unordered_map<int,int>m;
    struct Node *temp = head1;
    while(temp != NULL){
        m[temp->data]++;
        temp = temp->next;
    }
    temp = head2;
    int count = 0;
    while(temp != NULL){
        if(m.find(x-temp->data) != m.end()){
            count += m[x-temp->data];
        }
        temp = temp->next;
    }
    return count;
}
