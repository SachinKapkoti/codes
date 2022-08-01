class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
       Node* create=new Node(x);
       create->next=head;
       head=create;
       return head;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
     
       Node* end=new Node(x);
       Node* temp= head;
         if(head==NULL)
       return end;
       //till we reach end
       while(temp->next!=NULL)
       {
           temp=temp->next;
       }
           temp->next=end;
           return head;
       
    }
};