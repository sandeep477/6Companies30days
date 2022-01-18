Problem Link: https://practice.geeksforgeeks.org/problems/count-number-of-subtrees-having-given-sum/1/#

int countSubtreesWithSumXUtil(Node* root,int X,int &count)
{
    if(root==nullptr)
    {
        return 0;
    }

    int lt = countSubtreesWithSumXUtil(root->left,X,count);
    int rt = countSubtreesWithSumXUtil(root->right,X,count);
    
    int sum_subtree = lt+rt+root->data;
    if(sum_subtree==X)
    {
        count++;
    }
    return sum_subtree;
}
int countSubtreesWithSumX(Node* root, int X)
{
    int count=0;
    countSubtreesWithSumXUtil(root,X,count);
    return count;
}
