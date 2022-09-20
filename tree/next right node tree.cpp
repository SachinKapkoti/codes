class Solution
{
public:
    Node *nextRight(Node *root, int key)
    {
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++){
            Node* temp=q.front();
            q.pop();
            if(temp->left)
             q.push(temp->left);
            if(temp->right)
             q.push(temp->right);
            if(i!=n-1 && temp->data==key)
            {
                return q.front();
            }
            }
        }
        return new Node(-1);
    }