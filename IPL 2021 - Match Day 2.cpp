Problem Link : https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1/#

vector<int> max_of_subarrays(vector<int> nums, int n, int k) {
      vector<int>ans;
        deque<int>dq;
        int i;
        for(i=0;i<k;i++)
        {
            while(!dq.empty() && nums[i]>=nums[dq.back()])
                dq.pop_back();
            dq.push_back(i);
        }
        
        for(;i<n;i++)
        {
            ans.push_back(nums[dq.front()]);
            
            while(!dq.empty() && dq.front()<=i-k)
                dq.pop_front();
            
            while(!dq.empty() && nums[i]>=nums[dq.back()])
                dq.pop_back();
            dq.push_back(i);
        }
        ans.push_back(nums[dq.front()]);
        dq.pop_front();
        return ans;
    }
