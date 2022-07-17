class Solution{
    public:
    int maxPathSum(Node* root)
    {
        //code here
        if(!root)
        return 0;
        
        int leftside=root->data+maxPathSum(root->left);
        int rightside=root->data+maxPathSum(root->right);
        
        int m=max(leftside,rightside);
        return   m;
    }
};