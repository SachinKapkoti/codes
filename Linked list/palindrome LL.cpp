class Solution {
    
    //getmid
    //reverse form mid
    //compare
    //undo reverse
private:
    ListNode* getmid(ListNode* head)
    {
        ListNode*slow=head;
        ListNode*fast=head->next;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    
    
    ListNode* reverse(ListNode* head)
    {
       ListNode* forward=NULL;
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr!=NULL)
        {
            forward=curr->next;
            curr->next=prev;
            
            prev=curr;
            curr=forward;
        }
        return prev;
    }
 
public:
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL)//one node then palindeome
        { return true;
        }
        
        ListNode*middle=getmid(head);
        //found middle
        //reverse list after it
        ListNode*temp=middle->next;
        middle->next=reverse(temp);
        
        //comparing both halves
        ListNode* head1=head;
        ListNode* head2=middle->next;
        
        while(head2!=NULL)
        {
            if(head2->val != head1->val)
            {
                return false;
            }
            head1=head1->next;
            head2=head2->next;
        }
        //undo reverse
        temp=middle->next;//temp points to middle next aagain point of reverse
        middle->next=reverse(temp);
         
        return true;

    }
};