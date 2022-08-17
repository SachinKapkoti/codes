void sort(stack<int>&s,int num)
{
    //base
    if(s.empty() || num>s.top())
    {
        s.push(num);
        return;
    }
    //otherwise
    int j=s.top();
    s.pop();
    //until above conditio satisfied
    sort(s,num);
    s.push(j);
}

void empty(stack<int> &s)
{
   if(s.empty())
   {
       return;
   }
    int num=s.top();
    s.pop();
    //recursion
    empty(s);
    //sortlogic
    sort(s,num);
}

void SortedStack :: sort()
{
   empty(s);
  
}