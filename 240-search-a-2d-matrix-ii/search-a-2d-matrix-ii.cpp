class Solution {
public:
    bool bs(vector<vector<int>>& matrix, int target,int row){
        int low=0;
        int high=matrix[0].size()-1; //col length
        while(low<=high){
            int mid=low+(high-low)/2;
            
            if(matrix[row][mid]==target){
                return true;
            }
            else if(matrix[row][mid]<target){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return false;

    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {        int row=matrix.size();
        bool flag=false;
        for(int i=0;i<row;i++){
            if(bs(matrix,target,i)){
                flag=true;
            }
        }
        return flag;
        
    }
};