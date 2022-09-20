class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        if(root->left && root->right)
        {
        int l=minDepth(root->left);
        int r=minDepth(root->right);
        return min(l,r)+1;
        }
        return max(minDepth(root->left),minDepth(root->right))+1;

    }
};