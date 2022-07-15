class Solution {
public:
    void rightview(TreeNode* root,vector<int>&ans,int level)
    {if(!root)
        return;
     if(level==ans.size())
         ans.push_back(root->val);
     
     if(root->right) rightview(root->right,ans,level+1);
     if(root->left) rightview(root->left,ans,level+1);
     
        
    }
    vector<int> rightSideView(TreeNode* root) {
     vector<int>ans;
      rightview(root,ans,0);
        return ans;
    }
};