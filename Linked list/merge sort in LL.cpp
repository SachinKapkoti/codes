/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    ListNode* findmid(ListNode* head)
    {
        ListNode* slow=head;
        ListNode* fast=head->next;
        
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            
        }
        return slow;
    
    }
    
    ListNode* merge(ListNode* left,ListNode* right )
    {
        if(left==NULL)
            return right;
        if(right==NULL)
            return left;
        
        //dummy node to store ans
        //
        ListNode* ans=new ListNode(-1);
        ListNode* temp=ans;
        
        while(  left!=NULL&& right!=NULL)
        {
            if(left->val<right->val)
            {
                temp->next=left;
                temp=left;
                left=left->next;
            }
            else
            {
                temp->next=right;
                temp=right;
                right=right->next;
            }
        }
            
            //any one exhausts
            //push other LL
            if(left!=NULL)
             { 
                temp->next=left;
                temp=left;
                 left=left->next;
            }
            if(right!=NULL)
            {
                temp->next=right;
                temp=right;
                right=right->next;
            }
            ans=ans->next;
        
        return ans;
    }




 
    ListNode* sortList(ListNode* head) {
        //find mid
        //break
        //sort l n r
        //merge
        
        
        //no element or one ele
        if(!head || head->next==NULL)
        {
            return head;
        }
        
        ListNode*mid=findmid(head);
        
        //left n right parts
        ListNode*left=head;
        ListNode* right=mid->next;
        mid->next=NULL;
        //attach null to right pointer so it can actas separate LL
        
        
        //recursively merge left and right subparts
        left=sortList(left);
        right=sortList(right);
        
        ListNode*result=merge(left,right);
        return result;
        
    }
};