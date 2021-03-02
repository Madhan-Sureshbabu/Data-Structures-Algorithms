class Solution {
public:
    void erase(vector<vector<char>>& grid,int i,int j) {
        int n=grid.size(),m=n ? grid[0].size() : 0 ;
        if (i<0 || i==n || j<0 || j==m || grid[i][j]=='0' )
            return;
        grid[i][j]='0';
        erase(grid,i-1,j);
        erase(grid,i+1,j);
        erase(grid,i,j-1);
        erase(grid,i,j+1);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size(),m= n ? grid[0].size() : 0 ;
        int island=0;
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                if (grid[i][j]=='1')
                {
                    island++;
                    erase(grid,i,j);
                }
            }
        }
        return island;
    }
};