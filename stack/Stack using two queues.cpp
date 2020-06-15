void QueueStack :: push(int x)
{
    if(q1.empty()){
        q1.push(x);
    }else{
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
        // Your Code
}

/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
    int ele = -1;
    if(!q1.empty()){
        ele = q1.front();
        q1.pop();
    }
    return ele;
        // Your Code       
}
