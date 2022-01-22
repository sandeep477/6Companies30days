 int equalPartition(int N, int arr[])
    {
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum +=arr[i];
        }
        if(sum%2!=0)return false;
        sum/=2;
       vector<vector<bool>>dp(N+1,vector<bool>(sum+1,true));
       for(int i=0;i<=N;i++)
       {
           dp[i][0]=false;
       }
       for(int i=1;i<=sum;i++)
       {
           dp[0][i]=false;
       }dp[0][0]=true;
       for(int i=1;i<=N;i++)
       {
           for(int j=1;j<=sum;j++)
           {
               if(arr[i-1]<=j)
               {
                   dp[i][j] = (dp[i-1][j-arr[i-1]]) || dp[i-1][j]; 
               }
               else{
                   dp[i][j] = dp[i-1][j];
               }
           }
       }
       return dp[N][sum];
    }
