class Solution 
{
  public:
  bool maxorder(Node* root)
  {
      //If it's left and right is NULL means single node is there and single node is CBT.(TRUE)
      if(root->left==NULL && root->right==NULL)
         return 1;
      //If it's left exist and right not check root->data>root->left->data if true return it 
      else if(root->right==NULL)
         return root->data>root->left->data;
      //If it's left and right is not NULL check root->left and root->right and data of both left and right is greater
      else
         return maxorder(root->left)&&maxorder(root->right)&&root->data>root->left->data&&root->data>root->right->data;
  }
  bool isCBT(Node* root,int i,int size)
  {
      //If root is NULL return true
      if(root==NULL)
         return 1;
      //If size is lesser than the index value means that there is some node exist which is not following CBT properity        
      else if(i>=size)
         return 0;
      //check for both left and right      
      else
          return isCBT(root->left,2*i+1,size)&&isCBT(root->right,2*i+2,size);
  }
  int count(Node* root)
  {
      if(root==NULL)
         return 0;
      return 1+count(root->left)+count(root->right);
  }
  bool isHeap(struct Node* root) 
  {
      int size=count(root);
      return isCBT(root,0,size)&&maxorder(root);
  }
};