class Solution{
public:
     int dp[1001][1001];
     Solution(){
         memset(dp,-1,sizeof(dp));
         }
  
    int knapSack(int N, int W, int val[], int wt[])
    {
        if (N==0)
        return 0;
        
        if(W==0)
        return 0;
        
        if(dp[N][W]!=-1)
        return dp[N][W];
        
        if(wt[N-1]<=W)
        {
            return dp[N][W]= max(val[N-1]+knapSack(N,W-wt[N-1],val,wt),knapSack(N-1,W,val,wt));
        }
        else
         return dp[N][W]= knapSack(N-1,W,val,wt);
  
    }
};