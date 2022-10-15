class Solution {
public:
    
    int solve(int n,vector<int>&dp)
    {
        //base
        if(n==0 ||n==1 ||n==2)
            return n;
        if(dp[n])
            return dp[n];
        
        int ans=solve(n-2,dp)+solve(n-1,dp);
        dp[n]=ans;
        return ans;
        
    }
    
    int climbStairs(int n) 
    {
        vector<int>dp(n+1);
        return solve(n,dp);
        
        
    }
  
};