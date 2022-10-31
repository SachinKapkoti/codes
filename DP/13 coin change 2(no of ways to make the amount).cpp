class Solution {
public:
    
    int solve(int amount, vector<int>& coins,int N, vector<vector<int>>&dp)
    {
        if(N==0)
            return 0;
            
            if(amount==0)
            return 1;
        //////////////////////////////////
        30-10-22 base k bad chec k
        ////////////
        if(dp[N][amount]!=-1)
        return dp[N][amount];
        
        for(int i=0;i<amount+1;i++)
        {
            dp[0][i]=0;
        }
         for(int j=0;j<N+1;j++)
        {
            dp[j][0]=1;
        }
        
        //initially here tha so  tle
        if(coins[N-1]<=amount){
        return dp[N][amount]=solve(amount-coins[N-1],coins,N,dp)+solve(amount,coins,N-1,dp);
        }
        else
        return dp[N][amount]=solve(amount,coins,N-1,dp);
    }
  
    int change(int amount, vector<int>& coins) {
      int N=coins.size();
        vector<vector<int>>dp(N+1,vector<int>(amount+1,-1));
        return solve(amount,coins,N,dp);
        
    }
    
};