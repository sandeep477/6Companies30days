int lengthOfLongestAP(int A[], int n) {
       
        if(n<=2)return n;
        vector<vector<int>>dp(n,vector<int>(n,2));int llmax=2;
        for(int j=n-2;j>=1;j--)
        {
            int i=j-1,k=j+1;
            while(i>=0 && k<=n-1)
            {
                if(A[i]+A[k]<2*A[j])
                k++;
                else if(A[i]+A[k]>2*A[j])
                {
                    i--;
                }
                else{
                    dp[i][j] = dp[j][k]+1;
                    llmax = max(llmax,dp[i][j]);
                    i--;k++;
                }
            }
            
        }
        return llmax;
    }
