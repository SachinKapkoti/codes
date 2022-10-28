class Solution{   
public:

   bool solve(vector<int>&arr,int N,int sum,vector<vector<int>>&dp)
   {
       if(sum==0)
       {
           return true;
       }
       if(N==0)
       {
           return false;
       }
       
       if(dp[N][sum]!=-1)
       {
           return dp[N][sum];
       }
       
       if(arr[N-1]<=sum)
       {
       return dp[N][sum]= solve(arr,N-1,sum-arr[N-1],dp)||solve(arr,N-1,sum,dp);
       }
       else
       {
           return dp[N][sum]=solve(arr,N-1,sum,dp);
       }
   }
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int N=arr.size();
        vector<vector<int>>dp(N+1,vector<int>(sum+1,-1));
        return solve(arr,N,sum,dp);
    }
};