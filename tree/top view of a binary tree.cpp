class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int>ans;
        map<int,int>m;
        if(!root)
        return ans;
        queue<pair<Node*,int>>q;
    
        q.push({root,0});
          while(!q.empty())
          {
              Node* t= q.front().first;
              int hd=q.front().second;
              q.pop();
              if(!m[hd])// map does not have horizontal distance put root.
              m[hd]=t->data;
              if(t->left)q.push({t->left,hd-1});
              if(t->right)q.push({t->right,hd+1});
          }
          for(auto i:m)ans.push_back(i.second);
          return ans;
    }

};