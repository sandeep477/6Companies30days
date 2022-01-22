vector<int> subarraySum(int arr[], int n, long long s)
    {
       int i=0,j=0;int sum=0;
       for(j=0;j<n;j++)
       {
           sum+=arr[j];
           if(sum== s)
           {
               return {i+1,j+1};
           }
           while(sum>s && i<j)
           {
               sum -=arr[i];
               i++;
           }
           if(sum == s)
           {
               return {i+1,j+1};
           }
       }
       return {-1};
       
    }
