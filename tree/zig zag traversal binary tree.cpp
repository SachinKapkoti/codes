class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        vector<int>temp;
        if(!root)
            return ans;
        
        stack<TreeNode*>s1;
        stack<TreeNode*>s2;
        
        s1.push(root);
        
        while(!s1.empty() || !s2.empty())
        {
           
            while(!s1.empty())
            {
                
            TreeNode* top=s1.top(); //we put value at top of stack in temp vector
            s1.pop();
            temp.push_back(top->val);// then pop in from s1 and put its 
                                     // l and r children in s2
           // s1.pop();
            
            if(top->left)
                s2.push(top->left);
            if(top->right)
                s2.push(top->right);
                
            }
            ans.push_back(temp);   // when s1 empty push temp vector values in ans vector;
            
            temp.clear();
            
            while(!s2.empty())
            {
                TreeNode* top=s2.top();
                 s2.pop();
                temp.push_back(top->val);
                   // s2.pop();
                
                
            if(top->right)         //catch right to left in s1;
                    s1.push(top->right);
            if(top->left)            //catch right to left in s1;
                    s1.push(top->left);
                
            }
         if(temp.empty())
           continue;//## imp prevents null value cases
            ans.push_back(temp);
            temp.clear();
            
        }
        return ans;
        
    }
};