class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        
        string pushstr="Push";
        string popstr="Pop";
        vector<string>ans;
        // unordered_map<int,int>hash; //this will also works
        // for(int i=0;i<target.size();i++){
        //     hash[target[i]]++;
        // }
        unordered_set<int> hash; // unordered_set is more appropriate here

        for (int num : target) {
            hash.insert(num);
        }
        
        int lastElement = target.back();
        for(int i=1;i<=lastElement;i++){  
            if(hash.count(i)){
                ans.push_back(pushstr);
            }else{
                ans.push_back(pushstr);
                ans.push_back(popstr);
            }
        }
        return ans;
    }
};