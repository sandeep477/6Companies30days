Problem Link: https://practice.geeksforgeeks.org/problems/serialize-and-deserialize-a-binary-tree/1#

 void serializeUtil(Node *root,vector<int>&ans)
    {
        if(root==nullptr)
        {
            ans.push_back(-1);
            return;
        }
        else{
            ans.push_back(root->data);
            serializeUtil(root->left,ans);
            serializeUtil(root->right,ans);
        }
    }
    vector<int> serialize(Node *root) 
    {
        vector<int>ans;
        serializeUtil(root,ans);
        return ans;
    }
    
    //Function to deserialize a list and construct the tree.
    Node *deserialise(vector<int>A,int &i,int n)
    {
       if(i>=n)
       return nullptr;
       
       Node * root =new Node(A[i]);
      
       i++;
       if(i>=n||A[i]==-1)
       {
           root->left = nullptr;
       }
       else{
       root->left = deserialise(A,i,n);
       }
       
       i++;
       
       if(i>=n || A[i]==-1)
       {
           root->right = nullptr;
       }
       else{
           root->right = deserialise(A,i,n);
       }
       return root;
       
    }
    Node * deSerialize(vector<int> &A)
    {
       
       Node *root = nullptr;
       if(A.size()==0)return root;
       int i=0,n=A.size();
       root = new Node( A[i]);
       i++;
       if(i>=n||A[i]==-1)
       {
           root->left = nullptr;
       }
       else{
       root->left = deserialise(A,i,n);
       }
       i++;
       if(i>=n || A[i]==-1)
       {
           root->right = nullptr;
       }
       else{
           root->right = deserialise(A,i,n);
       }
       return root;
    }
