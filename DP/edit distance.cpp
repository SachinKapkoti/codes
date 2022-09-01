class Solution {
public:
    int solve(string &a,string &b,int i,int j,vector<vector<int>>&dp)
    {
        
        ///base
        if(i==a.length())//ek khatam hogya
        {
            return b.length()-j; //
        }
        if(j==b.length())
        {
            return a.length()-i;
        }
        //step3
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int ans=0;
        
        if(a[i]==b[j])
            //char matches
        {
            return solve(a,b,i+1,j+1,dp);
        }
        else
        {   //3 cases
            //insert
             int insert=1+solve(a,b,i,j+1,dp);
             int deletea=1+solve(a,b,i+1,j,dp);
             int replace=1+solve(a,b,i+1,j+1,dp);
        //replace means obv they will match
         
         ans= min(insert,min(deletea,replace));
        }
          //step2
        return dp[i][j]= ans;
            
    }
    
    
    int minDistance(string word1, string word2) {
        //dp vector
        vector<vector<int>>dp(word1.length(),vector<int>(word2.length(),-1));
       return  solve( word1,  word2,0,0,dp );
        
    }
};