class Solution{
    public:
    vector<int> preOrder(Node* root)
    {
        //code here
        vector<int >ans;
        stack<Node*>s;
        if(!root)
        return ans;
        s.push(root);
        while(!s.empty())
        {
            Node* curr=s.top();
            ans.push_back(curr->data);
            s.pop();
            if(curr->right)
             s.push(curr->right);
            if(curr->left)
             s.push(curr->left);
            
        }
        return ans;
    }
};