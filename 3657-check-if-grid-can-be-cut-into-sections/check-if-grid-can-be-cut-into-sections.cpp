class Solution {
public:
/* logic is similar to merge interval problem */
vector<vector<int>> merger(vector<vector<int>>& intervals){
    sort(begin(intervals),end(intervals));
    vector<vector<int>>res;
    res.push_back(intervals[0]);
    for(int i=1;i<intervals.size();i++){
        if(intervals[i][0]<res.back()[1]){
            res.back()[1]=max(intervals[i][1],res.back()[1]);
        }else{
            res.push_back(intervals[i]);
        }
    }
    return res;
}
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
      vector<vector<int>>hor;
      vector<vector<int>>vec;

      for(auto &corr:rectangles){
        int x1=corr[0];
        int x2=corr[2];
        int y1=corr[1];
        int y2=corr[3];

        hor.push_back({x1,x2});
        vec.push_back({y1,y2});
      }
      vector<vector<int>> res1=merger(hor);
      vector<vector<int>> res2=merger(vec);
      return res1.size()>=3 ||res2.size()>=3;
    }
};