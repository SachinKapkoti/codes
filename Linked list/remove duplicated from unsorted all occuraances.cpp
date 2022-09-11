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
    ListNode* deleteDuplicatesUnsorted(ListNode* head) {
        
        ListNode* dummy=new ListNode(-1);
        ListNode* prev=dummy;
        ListNode* curr=head;
        map<int,int>m;
           //val,freq
        while(curr)
        {
            m[curr->val]++;
            curr=curr->next;
        }
        curr=head;
        while(curr)
        {
            if(m[curr->val]>1)
            {
                curr=curr->next;
            }
            else
            {
                prev->next =curr;
                prev=prev->next;
                curr=curr->next;
            }
        }
        prev->next=curr;
        return dummy->next;
    }
};