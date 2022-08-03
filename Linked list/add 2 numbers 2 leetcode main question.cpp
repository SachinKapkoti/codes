
class Solution {
public:
    
    
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* forward=NULL;
        while(curr!=NULL)
        {
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
                
        }
        return prev;
    }
    
    void insertatTail(ListNode* &head, ListNode* &tail, int d)
    {    ListNode* temp=new ListNode(d);
          if(head==NULL)
          {
              head=temp;
              tail=temp;
              
              //empty list
          }
         else
         {
             //not empty insert elel at tail
             tail->next=temp;
             tail=temp;
             //keep track of tail
         }
        
    }
    
    ListNode* add(ListNode* l1, ListNode* l2)
    {
        int carry=0;
        ListNode* ansHead=NULL;
        ListNode* ansTail=NULL;
        while(l1!=NULL && l2!=NULL)
        {
            
        
        int sum=l1->val+l2->val+carry;
        int digit=sum%10;
        carry=sum/10;
        insertatTail(ansHead,ansTail,digit);
        l1=l1->next;
        l2=l2->next;
          
         } 
        //if one LL gets exhausted
        while(l1){
            int sum=l1->val+carry;
            int digit=sum%10;
            
            insertatTail(ansHead,ansTail,digit);
             carry=sum/10;
            l1=l1->next;
        }
        
        while(l2)
        {
            int sum=l2->val+carry;
            int digit=sum%10;
           
            insertatTail(ansHead,ansTail,digit);
              carry=sum/10;
            l2=l2->next;
        }
        //carry problem
        if(carry)
        {
            int sum=carry;
            int digit=sum%10;
            
            insertatTail(ansHead,ansTail,digit);
            int carry=sum/10;
            
        }
        return ansHead;
         }
    
        
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverse(l1);
        l2=reverse(l2);
        
        ListNode* ans=add(l1,l2);
        
        ans=reverse(ans);
        
        return ans;
    }
};