class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int sol(int a[],int n,int curr,int prev,vector<vector<int>>&dp)
    {
        //base
        if(curr==n)
       { return 0;}
       //include
       //curr>prev elemrnt,always take first ele
       if(dp[curr][prev+1]!=-1)
       {       return dp[curr][prev+1];
        }
        int include=0;
        if(prev==-1 || a[prev]<a[curr])
        {
             include=1+sol(a,n,curr+1,curr,dp) ;//3/,5 case
        }
        //exclude
        int exclude=0;
        exclude=sol(a,n,curr+1,prev,dp);//prev same cuz curr si smaller 5 ,2 case
        return dp[curr][prev+1]=max(include,exclude);
        
    }
    
    int longestSubsequence(int n, int a[])
    {
       // your code here
       vector<vector<int>>dp(n,vector<int>(n+1,-1));
       return sol(a,n,0,-1,dp);
    }