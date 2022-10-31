class Solution
{
    public:
    int dp[1001][1001];
    Solution()
    {
        memset(dp,-1,sizeof(dp));
    }
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       if(n==0||W==0)//either row or column is zro
       {
        return 0;   
       }
       if(dp[n][W]!=-1)
       return dp[n][W];
       
       if(wt[n-1]<=W)
       {
           return dp[n][W]=max (knapSack(W,wt,val,n-1)
           ,val[n-1]+knapSack(W-wt[n-1],wt,val,n-1) );//incluse or excule
           
       }
       else
       return dp[n][W]=knapSack(W,wt,val,n-1);
       
    }
};
