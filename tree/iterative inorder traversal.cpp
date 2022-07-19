class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int>ans;
        stack<TreeNode*>s;
        
        TreeNode* curr=root;
        
        while(true)
        {
         if(curr!=NULL)
         {
             s.push(curr);
             curr=curr->left;
             
         }
         else
         { if(s.empty())
            break;
          
          curr=s.top();
          s.pop();
          ans.push_back(curr->val);
          curr=curr->right;
          
         }  
            
        }
        return ans;
        
    }
};