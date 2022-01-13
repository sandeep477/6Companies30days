Problem Link :https://leetcode.com/submissions/detail/618964740/

 int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int n=grid.size();int flag=0;
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                    
                }
                if(grid[i][j]==1)flag=1;
            }
        }
        if(q.size()==0 && flag==1)return -1;
        if(q.size()==0)return 0;
        vector<pair<int,int>>move{{0,1},{0,-1},{1,0},{-1,0}};
        int  time=-1;
        
       while(q.size())
       {int size_  = q.size();
        time++;
        while(size_-- >0)
        {
            pair<int,int>p = q.front();
            q.pop();
            
            for(auto it:move)
            {
                int cx = it.first+p.first;
                int cy = it.second+p.second;
                if(cx>=0 && cx<n && cy>=0 && cy<m && grid[cx][cy]!=2 &&grid[cx][cy]!=0)
                {
                    q.push({cx,cy});
                    grid[cx][cy]=2;
                }
            }
        }
       }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)return -1;
            }
        }
        return time;
        
    }
