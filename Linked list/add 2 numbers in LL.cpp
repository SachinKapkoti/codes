//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{    
    private:
    Node* reverse (Node* head)
    {
        Node* forward=NULL;
        Node* curr=head;
        Node* prev=NULL;
        
        while(curr!=NULL)
        {
            //make connection before breaking it
            forward = curr->next;
            curr->next = prev;
            prev=curr;
            curr=forward;
            
        }
        return prev;
    }
        
        void insertatTail(struct Node* &head, struct Node* &tail,int val)
        {
            Node* temp=new Node(val);
            if(head==NULL)
            { //empty list head and tail both are temp
                head=temp;
                tail=temp;
                return;
            }
            else
            {      // add ele at the end
                tail->next=temp;
                tail =temp;
            }
  
        }
    
    
     struct Node* add(struct Node* first, struct Node* second)
     {
         int carry =0;
         Node* ansHead=NULL;
         Node* ansTail=NULL;
         
         while(first!=NULL && second!=NULL)
         {
         int sum= carry+first->data+second->data;
         int digit=sum%10;
          
          //create Node
         insertatTail(ansHead,ansTail,digit);
          carry=sum/10;
         
         first=first->next;
         second=second->next;
         }
         while(first!=NULL)
         {
             int sum=carry+first->data;
             int digit=sum%10;
             insertatTail(ansHead,ansTail,digit);
             carry=sum/10;
             first=first->next;
         }
         while(second!=NULL)
         {
             int sum=carry+second->data;
             int digit=sum%10;
             
             insertatTail(ansHead,ansTail,digit);
             carry=sum/10;
             second=second->next;
         }
         //both list were of sam length
         //last 2 nodes produce a  carry
         
         while(carry!=0)
         {
              int sum= carry;
         int digit=sum%10;
          
          //create Node
         insertatTail(ansHead,ansTail,digit);
         carry=sum/10;
         
         }
         return ansHead;
       
    }
    
    
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first=reverse(first);
        second=reverse(second);
        Node* ans=add(first,second);
        ans=reverse(ans);
        return ans;
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends