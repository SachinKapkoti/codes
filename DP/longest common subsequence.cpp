class Solution {
public:
    
    int solve(string &l1, string &l2,int i,int j,vector<vector<int>>&dp){
        if(i==l1.length())
            return 0;
        
        if(j==l2.length())
            return 0;
        //base
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int ans=0;
        if(l1[i]==l2[j])
        {
            ans=1+solve(l1,l2,i+1,j+1,dp);
        }
        else
        {  ans=max(solve(l1,l2,i+1,j,dp),solve(l1,l2,i,j+1,dp));
       }
    return dp[i][j]=ans;
    }
    int longestCommonSubsequence(string text1, string text2)  
    { vector<vector<int>>dp(text1.length(),vector<int>(text2.length(),-1));
        
        return solve(text1,text2,0,0,dp);
    }
};