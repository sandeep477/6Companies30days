Problem Link: https://practice.geeksforgeeks.org/problems/connect-nodes-at-same-level/1/#

void connect(Node *root)
    {
       queue<Node*>q;
       q.push(root);
       while(q.size()>0)
       {
           int size = q.size();
           while(size-- >0)
           {
               Node *temp = q.front();
               q.pop();
               if(size==0)
               {
                   temp->nextRight=nullptr;
               }
               else{
                   temp->nextRight = q.front();
               }
               if(temp->left!=nullptr)
               {
                   q.push(temp->left);
               }
               if(temp->right!=nullptr)
               {
                   q.push(temp->right);
               }
               
           }
           
       }
    }
