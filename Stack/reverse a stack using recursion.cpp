void insertAtbottom(stack<int>&t,int x)
{
if(t.empty())
{
    t.push(x);
    return;
}
    int num =t.top();
    t.pop();
    insertAtbottom(t,x);
    t.push(num);
}
void reverseStack(stack<int> &stack) {
    if(stack.empty())
    {
        return;
    }
    int num=stack.top();
    stack.pop();
    
    //recursion
    reverseStack(stack);
    
    insertAtbottom(stack,num);
 
}