Node* addPolynomial(Node *p1, Node *p2)
{
    if(!p1 && !p2){
        return NULL;
    }
    map<int,int> mp;
    Node *temp1 = p1;
    Node *temp2 = p2;
    while(temp1 != NULL)
    {
        mp[temp1->pow] += temp1->coeff;
        temp1 = temp1->next;
    }
    while(temp2!=NULL)
    {
        mp[temp2->pow] += temp2->coeff;
        temp2 = temp2->next;
    }
    
    for(auto it =(mp.rbegin()); it != prev(mp.rend()); it++)
    cout<<it->second<<"x^"<<it->first<<" + ";
    cout<<mp.begin()->second<<"x^"<<mp.begin()->first;
}
