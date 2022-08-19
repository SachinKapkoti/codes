


Input: N = 5, arr[] = {3, 8, 5, 2, 25}
Output: 2 5 2 -1 -1


class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        stack<int>t;
        t.push(-1);
        vector<int >ans(n);
        for(int i=n-1;i>=0;i--)
        {     int curr=arr[i];
              while(t.top()>=curr)
              {
                  t.pop();
              }
              ans[i]=t.top();
              t.push(curr);
        }
        return ans;
        
    } 
};