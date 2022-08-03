Input:
LinkedList: 1->2->2->4->5->6->7->8
K = 4
Output: 4 2 2 1 8 7 6 5 
Explanation: 
The first 4 elements 1,2,2,4 are reversed first 
and then the next 4 elements 5,6,7,8. Hence, the 
resultant linked list is 4->2->2->1->8->7->6->5.


class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        if(!head)
        return NULL;
        
        node* forward=NULL;
        node* curr=head;
        node* prev=NULL;
        int count=0;
        
        while(curr!=NULL && count<k)
        {
            forward=curr->next;
            curr->next=prev;
            
            prev=curr;
            curr=forward;
            count++;
        }
 
      if(forward!=NULL)
     {
         head->next=reverse(forward,k);
     } 

    return  prev;        
        }
        
    
};
