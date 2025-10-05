class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for(auto i: s){
            mp[i]++;
        }
        vector<pair<char,int>> v(mp.begin(), mp.end());

        sort(v.begin(), v.end(), [](auto &x, auto &y){
            return x.second > y.second;
        });
        string s2;
        for(auto &p : v){
            int i = 0;
            while(i<p.second){
                s2 += p.first;
                i++;
            }
        }
        return s2;
    }
};