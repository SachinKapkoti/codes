class Solution{
    public:
    vector<string>ans;
    vector<string> findPath(vector<vector<int>> &m, int n) {
     
        solve(m,n,0,0,"");
        return ans;
        
        
    }
    
    void solve(vector<vector<int>> &m,int n,int i,int j,string curr)
    {
        if(i==n-1 &&j==n-1)
        {
            if (m[i][j]==1)
            ans.push_back(curr);
            return;
            
        }
        //dont go in
        if(i<0 ||j<0 ||i>=n||j>=n|| m[i][j]==0)
        return;
        
        
        m[i][j]=0;//mark as visited
        
        //
          solve(m,n,i+1,j,curr+'D');
          solve(m,n,i,j-1,curr+'L');
          solve(m,n,i,j+1,curr+'R');
          solve(m,n,i-1,j,curr+'U');
           m[i][j]=1;
         
    }
};