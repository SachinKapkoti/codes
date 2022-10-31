class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
       // vector<vector<int>>dp(text1.size(),vector<int>(text2.size()));
        return sol(text1,text2,0,0);//dp);
    }
      int sol(string &l1,string &l2,int i,int j)//vector<vector<int>>&dp)
      {
          int ans;
          if(i==l1.length())
             {
                 return 0 ;
             }
          if(j==l2.length())
          { return 0;}
          
          //if(dp[i][j])
              //return dp[i][j];
          
          if(l1[i]==l2[j])
          {
              ans=1+sol(l1,l2,i+1,j+1);
          }
          else
          {
              ans=sol(l1,l2,i+1,j+1);
          }
          
          //return dp[i][j]=
              return ans;
      }   
};