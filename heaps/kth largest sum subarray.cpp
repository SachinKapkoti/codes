class Solution{
public:
    int kthLargest(vector<int> &Arr,int N,int K){
        
        priority_queue<int,vector<int>,greater<int>>minheap;
        int n=Arr.size();
        
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=i;j<n;j++)
          {  sum+=Arr[j];
          
             if(minheap.size()<K)
             {
                 minheap.push(sum);
                 
             }
             else
             {
                 if(sum>minheap.top()){
                 minheap.pop();
                 minheap.push(sum);
              }
          }
          }
        }
        return minheap.top();
    }
};