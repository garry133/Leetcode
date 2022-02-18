class Solution {
public:
    int numDecodings(string s) {
        if(s[0]=='0')return 0;
        int t[s.size()+1];
        t[0]=1;
        t[1]=1;
        for(int i=2;i<=s.size();i++){
            if(s[i-1]=='0'){
               if(s[i-2]!='1'&&s[i-2]!='2')return 0;
                t[i-1]=t[i-2];
                t[i]=t[i-2];
                continue;
            }
            if(s[i-2]=='0'){
                t[i]=t[i-1];
                continue;
            }
            t[i]=t[i-1];
            string k;
            k+=s[i-2];
            k+=s[i-1];
            // cout<<k;
            int x=0;
            stringstream g(k);
            g>>x;
            // cout<<x;
            if(x>=1&&x<=26)t[i]+=t[i-2];
        }
        return t[s.size()];
    }
};