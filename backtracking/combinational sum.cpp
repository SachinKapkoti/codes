class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    
    void solve(vector<int>&candidates,int target,vector<int>combination,int sum,int index,vector<vector<int>>&ans)
    {
        if(sum>target)
        return ;
        if(sum==target)
      {  ans.push_back(combination);
        return;
       
      } 
        for(int i=index;i<candidates.size();i++)
        {
            combination.push_back(candidates[i]);
            sum+=candidates[i];
             solve(candidates, target,combination,sum,i,ans);
             combination.pop_back();
             sum-=candidates[i];
             
        }
        
    }
    
    
    vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
        // Your code here
        vector<vector<int>>ans;
        vector<int>combination;
        sort(candidates.begin(), candidates.end());
         candidates.erase(unique(candidates.begin(), candidates.end()), candidates.end());
        solve(candidates,target,combination,0,0,ans);
         
        return ans;
    }
};