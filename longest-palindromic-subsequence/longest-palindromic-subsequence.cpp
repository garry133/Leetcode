class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string w1=s;
        reverse(s.begin(),s.end());
        string w2=s;
        int n=w1.size();
        int m=w2.size();
        int t[n+1][m+1];
        string ans;
        for(int i=0;i<=n;i++)t[i][0]=0;
        for(int i=0;i<=m;i++)t[0][i]=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(w1[i-1]==w2[j-1]){
                    t[i][j]=1+t[i-1][j-1];
                }
                else
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
        // for(int i=0;i<=n;i++){
        //     for(int j=0;j<=n;j++){
        //         cout<<t[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        int i=n,j=m;
        while(i>0&&j>0){
            if(w1[i-1]==w2[j-1]){
                ans+=w1[i-1];
                i--;j--;
            }
            else{
                if(t[i-1][j]>t[i][j-1])
                    i--;
                else
                    j--;
            }
        }
        cout<<ans<<" "<<endl;
        return t[n][m];
    }
};
   