Problem Link: https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1/#

 vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int row_start=0,row_end = r,col_start=0,col_end=c;
        vector<int>ans;
        while(row_start<row_end && col_start<col_end)
        {
            for(int j=col_start;j<col_end;j++)
            {
                ans.push_back(matrix[row_start][j]);
            }
            row_start++;
            for(int j=row_start;j<row_end;j++)
            {
                ans.push_back(matrix[j][col_end-1]);
            }
            col_end--;
            if(row_end>row_start){
            for(int j=col_end-1;j>=col_start;j--)
            {
                ans.push_back(matrix[row_end-1][j]);
            }
            row_end--;
            }
            if(col_end>col_start){
            for(int j=row_end-1;j>=row_start;j--)
            {
                ans.push_back(matrix[j][col_start]);
            }
            col_start++;
            }
        }
        return ans;
    }
