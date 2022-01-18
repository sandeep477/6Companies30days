Problem Link: https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1/

 int FindMaxSum(int arr[], int n)
    {
        if(n==1)return arr[0];
        if(n==2)return arr[1]>arr[0] ?arr[1]:arr[0];
        
        vector<int>dp(n,0);
        dp[0] =arr[0];
        dp[1] =arr[1]>arr[0]?arr[1]:arr[0];
        for(int i=2;i<n;i++)
        {
            dp[i] = dp[i-2]+arr[i]>dp[i-1]?dp[i-2]+arr[i]:dp[i-1];
        }
        return dp[n-1];
    }
