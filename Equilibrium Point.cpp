int equilibriumPoint(long long a[], int n) {
    if(n==1)return 1;
     int arr[n];arr[0]=a[0];
     for(int i=1;i<n;i++)
     {
         arr[i]=(arr[i-1]+a[i]);
     }
     for(int i=1;i<n-1;i++)
     {
         if(arr[i-1]==(arr[n-1]-arr[i]))
            return i+1;
     }
     return -1;
     
    }
