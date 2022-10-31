class Solution{
public:
 int dp[101][101];

  int solve(int i,int j, int arr[]){
      if(i==j)
      return 0;
      //size is one
      if(i>j)
      return 0;
      //out
      if(dp[i][j]!=-1)
      return dp[i][j];
      
      int ans=INT_MAX;
      for(int k=i;k<j;k++)
      {
          int temp=solve(i,k,arr)+solve(k+1,j,arr)+arr[i-1]*arr[k]*arr[j];
         ans=min(ans,temp);
              }
              return dp[i][j]=ans;

  }
    
    int matrixMultiplication(int N, int arr[])
    {
        memset(dp,-1,sizeof(dp));
        return solve(1,N-1,arr);
    }
};