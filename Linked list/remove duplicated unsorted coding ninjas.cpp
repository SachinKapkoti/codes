class Solution {
public:
    ListNode* deleteDuplicatesUnsorted(ListNode* head) {
       
        
        ListNode*curr=head;
    
        ListNode* prev=NULL;
         map<int,bool>visited;
           while(curr)
           {
               if(visited[curr->val]!=true)
               {
                   visited[curr->val]=true;
                   prev=curr;
                   curr=curr->next;
               }
               else
               {
                   prev->next=curr->next;
                   ListNode*temp=curr;
                   curr=curr->next;
                   delete(temp);
               }
           }
        return head;

    }
};