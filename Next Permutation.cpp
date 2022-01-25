vector<int> nextPermutation(int N, vector<int> arr){
        int j=N-2;
        while(j>=0 &&arr[j]>arr[j+1])
        {
            j--;
        }
        int pos=N-1;
        for(int i=N-1;i>j;i--)
        {
            if(arr[i]>arr[j])
            {
                pos=i;break;
            }
        }
        if(j>=0)
        {
            swap(arr[j],arr[pos]);
        }
        sort(arr.begin()+j+1,arr.end());
        return arr;
        
    }
