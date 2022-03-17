class Solution {
public:
    int scoreOfParentheses(string s) {
        vector<int>v(s.length()/2+1);
        int k=0,ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')
                k++;
            else{
                k--;
                if(v[k+1]==0)
                    v[k]++;
                else{
                    v[k]+=v[k+1]*2;
                 v[k+1]=0;
                }    
            }
        }
        for(int i=0;i<v.size();i++)
            ans+=v[i];
        return ans;
    }
};