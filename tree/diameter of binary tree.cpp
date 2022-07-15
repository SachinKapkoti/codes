class Solution {
public:
    

    int d=INT_MIN;
    int caldia(TreeNode* root)
    {
        if(!root)
            return 0;
        int leftside=caldia(root->left);
        int rightside=caldia(root->right);
        d=max(d,leftside+rightside);
        return max(leftside,rightside)+1;
    }
    
    
    int diameterOfBinaryTree(TreeNode* root) {
    
        caldia(root);
        return d;
            
    }
    
};