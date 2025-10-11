class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<bool>seen(26,false);
        vector<int>lastIdx(26,-1);
        for (int i = 0; i < s.size(); i++) {
             lastIdx[s[i] - 'a'] = i;
        }

        stack<char> res;
        
        int n=s.length();
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if (seen[c - 'a']) continue; 

            while (!res.empty() && res.top() > c && lastIdx[res.top() - 'a'] > i) {
                    seen[res.top() - 'a'] = false;
                    res.pop();
            }

            res.push(c);
            seen[c - 'a'] = true;
    }

        string ans="";

        // while(!res.empty()){
        //     ans=res.top()+ans;
        //     res.pop();
        // }
        while (!res.empty()) {
            ans += res.top();
            res.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};