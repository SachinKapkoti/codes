class Solution{
    public:
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        int ans=0;
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));//dp matrix
        for( int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(S1[i-1]==S2[j-1]) //if current matches
                //index 1 se start h (1-1)
                //s1 =0
                {
                    dp[i][j]=dp[i-1][j-1]+1; //add one,plus value of prev diagonal
                    ans=max(ans,dp[i][j]);
                }
            }
        }
        return ans;
    }
};