Input:
N = 8
arr[] = {7 2 8 9 1 3 6 5}
Output: 16//

4
1 2 3 4
Output: =6
//
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
       stack<long long>s;
       
       long long ans=0;
     
       
       for(int i=0;i<=n;i++)
       {
          while( !s.empty() && (i==n || arr[s.top()]>arr[i]))
          {
              long long length=arr[s.top()];
              s.pop();
              
              long long prevlow=s.empty()?-1:s.top();
              ans=max(ans,length*(i-prevlow-1));
              
          }
          s.push(i);
       }
       return ans;
    }
};