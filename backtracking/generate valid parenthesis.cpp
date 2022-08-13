class Solution
{
    public:
    
    
    void solve(vector<string> &ans,int n,int open,int close,string str)
    {
        
        //base
        if(str.size()==2*n)
        {
            ans.push_back(str);
        
        return;
        }
        if(open<n)
        solve(ans,n,open+1,close,str+"(");
        
        if(close<open)
        solve(ans,n,open,close+1,str+")");
        
    }
    
    
    vector<string> AllParenthesis(int n) 
    {
        vector<string>ans;
        solve(ans,n,0,0,"");
        return ans;
    }
};