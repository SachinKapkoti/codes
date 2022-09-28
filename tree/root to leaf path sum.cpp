class Solution
{
    public:
    bool hasPathSum(Node *root, int S) {
    // Your code here
    if(!root)
    return 0;
    
    if(!root->left && !root->right && root->data-S==0  )
     return 1;
    
    bool l=hasPathSum(root->left,S-root->data);
    bool r=hasPathSum(root->right,S-root->data);
    
    return l||r;
    
}
};