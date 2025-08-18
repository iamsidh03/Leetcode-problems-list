/* 
Approach:
 All elements on the same diagonal have the same index sum i + j
 Traverse the matrix and group elements by i + j into buckets (map or array of vectors).
 Traverse diagonals in increasing order of i + j.

If diagonal index is even → reverse it (go upward).

If odd → keep as is (go downward).
Append all diagonals into the final result vector.
 */
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int row=mat.size();
        int col=mat[0].size();
        map<int,vector<int>> mp;
        vector<int> res;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                mp[i+j].push_back(mat[i][j]);
            }
        }
        bool rev=true;
        for(auto &a:mp){
            if(rev){
                reverse(a.second.begin(),a.second.end());
            }
           for(auto &num:a.second){
            res.push_back(num);
           }
           rev=!rev;
        }
        return res;
    }
};