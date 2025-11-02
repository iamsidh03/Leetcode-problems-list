class Solution {
public:

    void guarded(int row,int col,vector<vector<int>>&grid){
        //up
        for(int i=row-1;i>=0;i--){
            if(grid[i][col]==2 ||grid[i][col]==3)break;

            grid[i][col]=1;
        }
        //down
        for(int i=row+1;i<grid.size();i++){
            if(grid[i][col]==2 ||grid[i][col]==3)break;

            grid[i][col]=1;
        }
        //left
        for(int j=col-1;j>=0;j--){
            if(grid[row][j]==2 ||grid[row][j]==3)break;

            grid[row][j]=1;
        }
        //down
        for(int j=col+1;j<grid[0].size();j++){
            if(grid[row][j]==2 ||grid[row][j]==3)break;

            grid[row][j]=1;
        }
    }
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>>grid(m,vector<int>(n,0));
    int cnt=0;
        for(vector<int>&w:walls){
            int i=w[0];
            int j=w[1];
            grid[i][j]=3;
        }
        
        for(vector<int>&g:guards){
            int i=g[0];
            int j=g[1];
            grid[i][j]=2;
        }
        for(vector<int> grd:guards){
            int i=grd[0];
            int j=grd[1];
            guarded(i,j,grid);
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0)cnt++;
            }
        }
        return cnt;
    }
};