Problem Link:https://practice.geeksforgeeks.org/problems/length-of-largest-region-of-1s-1587115620/1/

int findMaxArea(vector<vector<int>>& grid) {
        vector<pair<int,int>>moves{{0,1},{0,-1},{1,0},{-1,0},
                                   {-1,-1},{1,-1},{-1,1},{1,1}};
                                   
        queue<pair<int,int>>q;
        int n = grid.size(),m=grid[0].size();int max_area=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    q.push({i,j});grid[i][j]=0;
                    int area=1;
                    while(q.size()>0)
                    {
                        pair<int,int>g = q.front();
                        q.pop();
                        for(auto it:moves)
                        {
                            int cx = it.first+g.first;
                            int cy = it.second+g.second;
                            if(cx>=0 && cy>=0 && cx<n && cy<m && grid[cx][cy]==1)
                            {
                                area++;
                                q.push({cx,cy});
                                grid[cx][cy]=0;
                            }
                        }
                    }
                    max_area = max(max_area,area);
                }
            }
        }
        return max_area;
    }
