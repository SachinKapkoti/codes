//inorder is sorted of bst ,compare curr elemnt
// to prev if not> curr  not bst
class Solution {
public:
    vector<int>res;
    void solve(TreeNode* root)
    {
        if(!root)
            return;
        
        solve(root->left);
            res.push_back(root->val);
        solve(root->right);
  
    }
    
    
    bool isValidBST(TreeNode* root) 
    {
        //vector<int>res;
        solve(root);
        for(int i=1;i<res.size();i++)
        {  if(res[i]<=res[i-1])
            return false;
        }
    
    
             return true;
}
  
};