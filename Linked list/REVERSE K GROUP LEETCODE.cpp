
Example 
Input: head = [1,2,3,4,5], k = 3
Output: [3,2,1,4,5]


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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(!head)
            return NULL;
        
        
        ListNode* curr=head;
        ListNode* forward=NULL;
        ListNode* prev=NULL;
        int count=0;
        //solving first k nodes
        while(curr!=NULL && count<k)
        {
            //make connectiom
            
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            count++;
            
            //0 ,1,2,3
             //size counting same as  arr  IMPORTANT NOTE*******
              //count=2 after above opeation
        }
          if(count != k)
          {
            return reverseKGroup(prev,count);
          }
        
        //recursion for other k  parts
        if(forward!=NULL )
        {
            head->next=reverseKGroup(forward,k);
            ///
          }
        
        return prev;
    }
};