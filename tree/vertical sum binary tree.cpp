class Solution{
  public:
    vector <int> verticalSum(Node *root) {
        // similar to top view
        //take map and queue
        map<int,int>m;
        
        queue<pair<Node*,int>>q;
        vector<int>ans;
        if(!root)
        return ans;
        q.push({root,0});
        while(!q.empty())
    {
        Node* curr=q.front().first;
        int hd=q.front().second;
        q.pop();
        if(!m[hd])
        {m[hd]=curr->data;
        }
        else
        m[hd]+=curr->data;
        
        if(curr->left)
        q.push({curr->left,hd-1});
        if(curr->right)
        q.push({curr->right,hd+1});
     
    }
    for(auto x:m)
    ans.push_back(x.second);
    return ans;
        
    }
};