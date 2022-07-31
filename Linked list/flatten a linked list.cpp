Node* merge(Node* root1 ,Node*root2)
{
    if(!root1)
    return root2;
    
     if(!root2)
    return root1;
    
    Node* root3;
    
    if(root1->data <=root2->data)
    {
        root3=root1;          //smaller one move one step bottom of smaller one
        root3->bottom=merge(root1->bottom,root2);
        
    }
    else
    {
        root3=root2;
         root3->bottom=merge(root1,root2->bottom);
    }
    
}


Node *flatten(Node *root)
{
   Node*root1=root;
   Node* root2=root->next;
   while(root2)   //till root->next
   {
       root1=merge(root1,root2);
       root2=root2->next;
   }
   
   return root1;
}