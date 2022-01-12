Problem Link : https://leetcode.com/problems/longest-mountain-in-array/

 int longestMountain(vector<int>& arr) {
        int n=arr.size();
        int i=0,j=0,k=0,ans=0;
        while(j<n)
        {
            j=i;
            while(j+1<n && arr[j]<arr[j+1])
            {
                j++;
            }
            if(i==j)
            {
                i=j+1;
                continue;
            }
            k=j;
            while(k+1<n && arr[k]>arr[k+1])
            {
                k++;
            }
            if(j==k)
            {
                i = k+1;
                continue;
            }
            ans = max(ans, k-i+1);
            i=k;
        }
        return ans;
    }
