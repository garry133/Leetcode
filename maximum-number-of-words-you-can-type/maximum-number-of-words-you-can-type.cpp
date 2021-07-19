class Solution {
public:
    int canBeTypedWords(string t, string b) {
        int c=1,ans=0,a=1;
        for(int i=0;i<=b.size();i++){
            for(int j=0;j<t.size();j++){
             if(t[j]==b[i]){
                    t[j]='1';
                }    
            }
        }
        for(int j=0;j<t.size();j++){
            if(t[j]==' '){
                c=1;
                a++;
            }
            if(t[j]=='1'&&c==1){
                c=0;
                ans++;
            }
        }
        // cout<<a<<" "<<ans<<endl;
        return a-ans;
    }
};