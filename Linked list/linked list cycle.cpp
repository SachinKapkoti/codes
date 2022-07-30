class Solution {
public:
    
    bool hasCycle(ListNode *head) 
    {
        if(!head)
            return false;
        
        map<ListNode*,bool>visited;
        ListNode*temp=head;
      
        while(temp!=NULL)//u can say infinte loop if cycle,wait..
        {
            if(visited[temp]==true)//cycle present
               return true;
        
    
        visited [temp]=true;//else mark this node as visited
        temp=temp->next;
     
    }
    return false;
    

    }    
    
};