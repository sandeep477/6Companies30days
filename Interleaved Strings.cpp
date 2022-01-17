Problem Link: https://practice.geeksforgeeks.org/problems/interleaved-strings/1/?category[]=Dynamic%20Programming&category[]=Dynamic%20Programming&company[]=Amazon&company[]=Amazon&problemType=functional&page=1&sortBy=submissions&query=category[]Dynamic%20Programmingcompany[]AmazonproblemTypefunctionalpage1sortBysubmissionscompany[]Amazoncategory[]Dynamic%20Programming#

bool isInterleave(string A, string B, string C) 
    {int n=A.size(),m=B.size();
       vector<vector<bool>>dp(n+1,vector<bool>(m+1,false));
       dp[0][0]=false;
       for(int i=1;i<=n;i++)
       {
           if(A[i-1]==C[i-1])dp[i][0]=true;
       }
       for(int i=1;i<=m;i++)
       {
           if(B[i-1]==C[i-1])dp[0][i]=true;
       }
       for(int i=1;i<=n;i++)
       {
           for(int j=1;j<=m;j++)
           {
               if(A[i-1]==C[i+j-1] && B[j-1]==C[i+j-1])
               dp[i][j] = dp[i-1][j] || dp[i][j-1];
               else if(A[i-1]==C[i+j-1])
               dp[i][j] = dp[i-1][j];
               else if(B[j-1]==C[i+j-1])
               dp[i][j]=dp[i][j-1];
               else
               dp[i][j]=false;
           }
        }
        return dp[n][m];
    }
