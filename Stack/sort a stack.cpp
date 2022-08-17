void sortInsert(stack<int> &s,int num)
{
    //base
    if(s.empty() || s.top()<num)
    {
        s.push(num);
        return;
    }
    //else we pop
    int num1=s.top();
    s.pop();
    //recursion
    sortInsert(s,num);
    
    s.push(num1);
}

void sortStack(stack<int> &stack)
{
	//base
    if(stack.empty())
    {
        return;
    }
    
    int num=stack.top();
    stack.pop();

    sortStack(stack);
         
    sortInsert(stack,num);
 
}