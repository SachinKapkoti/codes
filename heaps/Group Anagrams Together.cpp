class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         
        int n=strs.size();
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>m;
        
        int i=0;
        while(i<n){
        string s=strs[i];
        sort(s.begin(),s.end());
        m[s].push_back(strs[i]);
        i++;
        }
      //  for(auto i=m.begin();i!=m.end();i++)
    //    {
    //        ans.push_back(i->second);
   //     }
        for(auto x:m)
        {ans.push_back(x.second);
        }
        return ans;
    }
};