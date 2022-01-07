Problem Link: https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1#

class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        int n=nums.size();
        if(n%2 == 1)return false;
        for(int i=0;i<n;i++)
        {
            nums[i] = nums[i]%k;
        }
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++)
        {   if(nums[i]%k !=0){
            if(mp.find(k-nums[i])!=mp.end())
            {
                mp[k-nums[i]]--;
                if(mp[k-nums[i]]==0)mp.erase(k-nums[i]);
            }
            else{
                mp[nums[i]]++;
            }
        }
        }
        if(mp.size()>0)return false;
        return true;
    }
};
