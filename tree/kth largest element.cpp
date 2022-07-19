class Solution
{
    public:
    vector<int>ans;
    void inorder(Node* root)
    {
        if(!root) return;
        inorder(root->right);
        ans.push_back(root->data);
        inorder(root->left);
        
    }

    int kthLargest(Node *root, int k)
    {
        
        inorder(root);
        return ans[k-1];
        }
};