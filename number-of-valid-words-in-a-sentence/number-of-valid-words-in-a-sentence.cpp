class Solution {
public:
    int countValidWords(string s) {
        int ans=0,a=0,l=0,ll=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                if(s[i]>=48&&s[i]<=57)a++;
                else if(s[i]=='!'||s[i]=='.'||s[i]==','){
                    if(l>0){
                        a++;continue;}
                    if(i+1<s.size()){
                        if(s[i+1]!=' ')a++;
                    }
                    l++;
                }
                else if(s[i]=='-'){
                    if(ll>0){
                        a++;continue;}
                    if(i-1>=0){
                        if(s[i-1]<'a'||s[i-1]>'z')a++;
                    }
                    else a++;
                    if(i+1<s.size()){
                        if(s[i+1]<'a'||s[i+1]>'z')a++;
                    }
                    else
                        a++;
                    ll++;
                }
            }
            else{
                l=0;ll=0;
                if(i!=0&&a==0){
                    ans++;
                    // cout<<s[i-1]<<i<<" ";
                }
                while(i<s.size()&&s[i]==' ')i++;
                i--;
                a=0;
            }
        }
        if(s[s.size()-1]!=' '&&a==0)ans++;
        // cout<<endl;
        return ans;
    }
};