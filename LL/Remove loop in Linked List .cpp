void removeLoop(Node* head)
    {
       Node* cur = head;
       Node* nxt = head;
       if(head == NULL || head->next == NULL) return;
       while (nxt != NULL && nxt->next != NULL){
           cur = cur->next;
           nxt = nxt->next->next;
           if(cur == nxt) break;
       }
       if(nxt == NULL || nxt->next == NULL) return;
       if(cur == head){
           cur = cur->next;
           while(cur->next != head){
               cur = cur->next;
           }
           cur->next = NULL;
       }else{
           cur = head;
           Node *res = head;
           while(cur != nxt){
              cur = cur->next;
              res = nxt;
              nxt = nxt->next;
           }
           res->next = NULL;
       }
    }
