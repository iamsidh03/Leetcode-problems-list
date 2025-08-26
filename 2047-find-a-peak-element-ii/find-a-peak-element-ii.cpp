class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int row=mat.size();
        int col=mat[0].size();
        bool top=false,bottom=false,right=false,left=false;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(i==0)top=true;
                if(j==0) left=true;
                if(i==row-1) bottom=true;
                if(j==col-1) right =true;
                if(i>0 &&mat[i-1][j]<mat[i][j]){
                    top=true;
                }
                if(j>0 &&mat[i][j-1]<mat[i][j]){
                    left=true;
                }
                if(i<row-1&&mat[i+1][j]<mat[i][j]){
                    bottom=true;
                }
                if(j<col-1&&mat[i][j+1]<mat[i][j]){
                    right=true;
                }
                if(top&&bottom&&right&&left){
                  return vector<int>({i,j});
            }
            top=false,bottom=false,right=false,left=false;

            }
            
                
            
        }
        return vector<int>({-1,-1});
    }
};