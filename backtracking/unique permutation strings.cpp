class Solution
{
	public:
	 void solve(string &s,vector<string>&ans,int index)
	 {
	     
	     if(index==s.size())
	     {
	         for(auto x:ans)
	       {  if(x==s)
	             return;
	         }
	     
	      
	          ans.push_back(s);
	         return;
	     }
	     
	     for(int i=index;i<s.size();i++)
	     {
	         swap(s[index],s[i]);
	         solve(s,ans,index+1);
	         swap(s[index],s[i]);
	     }
	 }

		vector<string>find_permutation(string S)
		{
		    vector<string>ans;
		    int index=0;
		    solve(S,ans,index);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};