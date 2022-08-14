class MedianFinder {
public:
    
    priority_queue<int>s;
    priority_queue<int,vector<int>,greater<int>>g;
    
    MedianFinder() {}
    
    void addNum(int num) {
        if(s.size()==0 || s.top()>num)
        { s.push(num);
        }
        else
        {g.push(num);}
        
        if(s.size()>g.size()+1)
        {
            g.push(s.top());
            s.pop();
        }
        if(g.size()>s.size())
        {
            s.push(g.top());
            g.pop();
        }
        
    }
    //min heap(on right) contains ele that are greater than median
    //since max heap size is greater
    //it contain median required when size is not equal
    double findMedian() {
        if(g.size()==s.size())
            
            return (g.top()+s.top())/2.000;
        
        else
            return s.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
