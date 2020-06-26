stack<int> deleteMid(stack<int>s,int sizeOfStack,int current)
{
    if(current == ceil(sizeOfStack/2)) {
        s.pop();
        return s;
    }
    int val = s.top();
    s.pop();
    s = deleteMid(s,sizeOfStack,current+1);
    s.push(val);
    return s;
}
