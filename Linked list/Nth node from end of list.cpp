int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node* slow=head;
       Node* fast=head;
       
      int i=1;
      for(int i=1;i<n;i++)
      {
        fast=fast->next;//moved fast n steps steps ahead
      
        if(!fast)//if no nodes end
        return {-1};
      } 
      
       while(fast->next)//move one-one steps ahead;
       { fast=fast->next;
        slow=slow->next;
       }
       return slow->data;
       
}

