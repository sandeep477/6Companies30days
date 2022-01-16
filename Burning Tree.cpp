Problem Link : https://practice.geeksforgeeks.org/problems/burning-tree/1/

class Solution {
  public:
  int BurnTime;
  Solution(){
      this->BurnTime = 0;
  }
    int minTime(Node* root, int target) 
    {
        minTime_(root,target);
        return BurnTime;
    }
    void kdown(Node *root,Node* blockingNode,int spot)
    {
        if(root==nullptr)
        {
            BurnTime = max(BurnTime,spot-1);
            return;
        }
        if(root==blockingNode)return;
        
        kdown(root->left,blockingNode,spot+1);
        kdown(root->right,blockingNode,spot+1);
    }
    
    int minTime_(Node *root,int target)
    {
        if(root==nullptr)return -1;
        
        if(root->data == target)
        {
            kdown(root,nullptr,0);
            return 1;
        }
        int lt = minTime_(root->left,target);
        if(lt!=-1)
        {
            kdown(root,root->left,lt);
            return lt+1;
        }
        int rt = minTime_(root->right,target);
        if(rt!=-1)
        {
            kdown(root,root->right,rt);
            return rt+1;
        }
    }
};
