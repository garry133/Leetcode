//wrong way
// class Solution {
// public:
//     string longestPalindrome(string s) {
//         string w1=s;
//         reverse(s.begin(),s.end());
//         string w2=s;
//         int n=w1.size();
//         int m=w2.size();
//         int t[n+1][m+1];
//         string ans;
//         // int ans=0,ind=0;
//         for(int i=0;i<=n;i++)t[i][0]=0;
//         for(int i=0;i<=m;i++)t[0][i]=0;
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=m;j++){
//                 if(w1[i-1]==w2[j-1]){
//                     t[i][j]=1+t[i-1][j-1];
//                 }
//                 else
//                     t[i][j]=0;
                
//                 // if(ans<t[i][j]){
//                 //     ans=t[i][j];
//                 //     ind=i-1;
//                 // }
//             }
//         }
//         for(int i=0;i<=n;i++){
//             for(int j=0;j<=n;j++){
//                 cout<<t[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//         int i=n,j=m;
//         while(i>0&&j>0){
//             if(w1[i-1]==w2[j-1]){
//                 ans+=w1[i-1];
//                 i--;j--;
//             }
//             else{
//                 if(t[i-1][j]>t[i][j-1])
//                     i--;
//                 else
//                     j--;
//             }
//         }
//         return ans;
//         // cout<<ans<<" "<<ind<<endl;
//         // ind=ind-ans+1;
//         // return w1.substr(ind,ans);
//     }
// };

//right way 
class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
       vector<vector<int>>t((n),vector<int>(n));
        int ans=1,index=0;
        for(int i=0;i<n;i++){
            t[i][i]=1;
            index=i;
        }
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                t[i][i+1]=1;
                index=i;
                ans=2;
            }     
        }
        for(int k=3;k<=n;k++){
            for(int i=0;i<=n-k;i++){
                int j=i+k-1;
                if(s[i]==s[j]&&t[i+1][j-1]){
                    t[i][j]=1;
                    index=i;
                    ans=k;
                }
            }
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         cout<<t[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return s.substr(index,ans);
    }
};