Problem link: https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1#

    vector<pair<int,int>> NGL(int price[],int n)
    {
        vector<pair<int,int>>ans;
        stack<pair<int,int>>st;
        
        int i=0;
        while(i<n)
        {
           while(!st.empty() && st.top().first<=price[i])
           {
               st.pop();
           }
           if(st.size()==0){ans.push_back({-1,-1});}
           else{
               ans.push_back(st.top());
           }
           st.push({price[i],i});
           i++;
        }
        return ans;
    }
    
    vector <int> calculateSpan(int price[], int n)
    {
        vector<pair<int,int>>temp_store_position = NGL(price,n);
        vector<int>final_answer(n,0);
        final_answer[0]=1;
        for(int i=1;i<n;i++)
        {
            final_answer[i] = i-temp_store_position[i].second;
        }
        return final_answer;
       
    }
