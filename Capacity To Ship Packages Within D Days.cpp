int make_parts(vector<int>weight,int max_load)
    {
        int load=0,n=weight.size(),days=0;
        for(int i=0;i<n;i++)
        {
            if(weight[i]>max_load)return -1;
            load+=weight[i];
            if(load == max_load)
            {
                days++;
                load=0;
            }
            else if(load>max_load)
            {
                days++;
                load=weight[i];
            }
        }
        return load==0?days:days+1;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int high=0;
        high = accumulate(weights.begin(),weights.end(),0);
        int low=0,ans=0;
        while(low<=high)
        { 
            int mid = (low+high)/2;
            int parts = make_parts(weights,mid);
            if(parts == -1)
            {
                low = mid+1;
            }
            else if(parts <= days)
            {
                ans  = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
