void insert(stack<int>&s,int val){
    if(s.size() == 0 || s.top() <= val){
        s.push(val);
        return;
    }
    int temp = s.top();
    s.pop();
    insert(s,val);
    s.push(temp);
    return;
}
void SortedStack :: sort()
{
    if(s.size() == 1){
        return;
    }
    int val = s.top();
    s.pop();
    sort();
    insert(s,val);
    return;
}
