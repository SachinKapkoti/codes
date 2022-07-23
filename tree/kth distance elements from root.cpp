void findk(struct Node* root,int k,vector<int>&ans)
{
  if(!root)
  return;
  
  if(k==0)
  {ans.push_back(root->data);
   return;
      
  }
  else{
      findk(root->left,k-1,ans);
      findk(root->right,k-1,ans);
      }
}

vector<int> Kdistance(struct Node *root, int k)
{ 
    vector<int>ans;
    findk(root,k,ans);
    return ans;
  
}