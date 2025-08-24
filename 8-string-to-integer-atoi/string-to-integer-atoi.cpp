class Solution {
public:
    int myAtoi(string s) {
        int n=s.length();
        long ans=0;
        bool neg=false;
        int i=0;
        if(n==0) return 0;
        while(i<n && s[i]==' ') i++;

        if(s[i]=='-' || s[i]=='+'){
            neg=(s[i]=='-');
            i++;
        }
        while(i<n && isdigit(s[i])){
            int dig=s[i]-'0';
            ans=(ans*10)+dig;

            if(!neg &&ans>INT_MAX) return INT_MAX;
            if(neg && -ans<INT_MIN) return INT_MIN;
            i++;
        }
        return neg? -ans:ans;
    }
};