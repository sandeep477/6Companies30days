 void reverseInGroups(vector<long long>& arr, int n, int k){
       int i=0,j=k-1;
       while(i<n)
       {
           if(j<n)
           reverse(arr.begin()+i,arr.begin()+i+k);
           else{
               reverse(arr.begin()+i,arr.end());
           }
           i=j+1;
           j+=k;
       }
    }
