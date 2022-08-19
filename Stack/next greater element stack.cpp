class Solution
{
    public:
    
    vector<long long> nextLargerElement(vector<long long> arr, int n){
      vector<long long>ans(n);
       stack<long long>s;
       
       for(int i=n-1;i>=0;i--)
       {
           while(!s.empty() && s.top()<=arr[i])
              {
                  s.pop();
              }
              if(!s.empty())
              {
                  ans[i]=s.top();
              }
              else
             { ans[i]=-1;
             }
             s.push(arr[i]);
       }
     return ans;
     
     
    }