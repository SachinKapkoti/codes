    class info{
        public:
        int maximum;
        int minimum;
        bool isbst;
        int size;
    };
    class Solution{
    public:
   info solve(Node * root, int & ans)
    {
        if(!root)
        return {INT_MIN,INT_MAX,true,0};
        
       info left=solve(root->left,ans);
        info right=solve(root->right,ans);
        
        info currnode;
        currnode.size=left.size+right.size+1;
        currnode.maximum=max(root->data,right.maximum);
        currnode.minimum=min(root->data,left.minimum);
        
        if(left.isbst && right.isbst && (root->data>left.maximum && root->data<right.minimum))
        {
            currnode.isbst=true;
        }
        else{
            currnode.isbst=false;
        }
        if(currnode.isbst)
        {ans=max(ans,currnode.size);
        }
        return currnode;
    }
    
    int largestBst(Node *root)
    {
    	 int ans=0;
    	 solve(root,ans);
    	 return ans;
    }
};