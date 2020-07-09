void linkdelete(struct Node  *head, int M, int N)
{
    struct Node *temp = head;
    struct Node *carry = head;
    struct Node *prv;
    int j,k;
    while(carry != NULL){
        j = 0, k = 0;
        while(carry != NULL && j < M){
            prv = carry;
            carry = carry->next;
            j++;
        }
        while(carry != NULL && k < N){
            carry = carry->next;
            k++;
        }
        prv->next = carry;
    }
    //Add code here   
}
