class MinStack {
public:
     stack<long long>s;
  long long min;
    MinStack() {
        
    }
   
    
    void push(int val) {
        if(s.empty())
        {
            s.push(val);
            min=val;
        }
        else if(val<=min)
        {
            
            s.push(2ll*val-min);
            min=val;
        }
        else
        {
            s.push(val);
        }
    }
    
  void pop() {
        if(s.empty())
        {return; }
        
        long t=s.top();
        if(t<min)
        {
            min=2ll*min-t; //find new element because original min is popped here
        }
        s.pop(); //pop does not pops original ele
                // but it does not matter 
    }
    
    int top() {
        if(min>s.top())
            return min;
        else
            return s.top();
    }
    
    int getMin() {
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
