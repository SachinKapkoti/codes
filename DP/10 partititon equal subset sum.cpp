class Solution {
public:
    
    bool sol(vector<int>& nums,int n,int sum,int i,vector<vector<int>>&dp)
         {
             if(i>=n)
                 return 0;
             if(sum<0)
                 return 0;
             if(sum==0)
                 return 1;
        
             if(dp[i][sum]!=-1)
                 return dp[i][sum];
             
             bool include=sol(nums,n,sum-nums[i],i+1,dp);//index and sum is changing 2d dp
             bool exclude=sol(nums,n,sum,i+1,dp);
        return dp[i][sum] =include or exclude;
      }
     
         
    bool canPartition(vector<int>& nums) 
    {
       
        int n=nums.size();
        int sum;
        int pl=0;
        for(int i=0;i<n;i++)
        {
             pl += nums[i];
            
        }
        if(pl & 1)
            return 0;
        sum=pl/2;
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
       return sol(nums,n,sum,0,dp);
    }
};