Given a Binary search tree. Your task is to complete the function which will return the Kth largest element without doing any modification in Binary Search Tree.


Example 1:

Input:
      4
    /   \
   2     9
k = 2 
Output: 4


/////
class Solution
{
    public:
    vector<int>ans;
     void inorder(Node root,int K)
     {
         if(!root)
         return ans;
         
         inorder(root->right);
         
         ans.push_back(root->data);
           inorder(root->left);
         
         
     }
    int kthLargest(Node *root, int K)
    {
       inorder(root);
       return ans[k-1];
        
    }
};