Problem Link: https://practice.geeksforgeeks.org/problems/count-ways-to-nth-stairorder-does-not-matter1322/1/#

long long countWays(int m)
    {
      vector<long long>res(m+1);
      res[0]=1;
      res[1]=1;
      for(int i=2;i<=m;i++)
      {
          res[i] = res[i-2]+1;
          
      }
      return res[m];
    }
