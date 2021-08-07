// class Solution {
// public:
//     int t[2001][2001];
//     int t1[2001][2001];
//     bool ispalindrom(string &s,int i,int j){
//         if(i>=j)return 1;
//         if (t1[i][j] != -1) return t1[i][j];
//         if (s[i] == s[j]) return t1[i][j] = ispalindrom(s, i + 1, j - 1);
//         return t1[i][j] = 0;
//         // while(i<j){
//         //     if(s[i]!=s[j])return false;
//         //     i++;j--;
//         // }
//         // return true;
//     }
//     int solve(string &s,int i,int j){
//         if(i>=j)return 0;
//         if(ispalindrom(s,i,j))return t[i][j]=0;
//         if(t[i][j]!=-1)return t[i][j];
//         int mn=INT_MAX;
//         for(int k=i;k<j;k++){
//              int r;
//             if(t[k+1][j]!=-1) r=t[k+1][j];
//             else t[k+1][j]=r=solve(s,k+1,j);
//              int tempans;
//             if(ispalindrom(s,i,k)){
//                 tempans= r+1; 
//             } 
//             if(mn>tempans)
//                 mn=tempans;
//         }
//         return t[i][j]=mn;
//     }
//     int minCut(string s) {
       
//         memset(t,-1,sizeof(t));
//         memset(t1,-1,sizeof(t1));
//         return solve(s,0,s.size()-1);
//     }
// };

class Solution {
public:
    int dp[2001][2001];
    int dp2[2001][2001];
    bool ispalindrome(string &str,int i,int j){
        if (i >= j) return 1;
        if (dp2[i][j] != -1) return dp2[i][j];
        if (str[i] == str[j]) return dp2[i][j] = ispalindrome(str, i + 1, j - 1);
        return dp2[i][j] = 0;
    }
    
    int solve(string &str, int i, int j){
        if(i>=j) return 0;
        if(ispalindrome(str,i,j)) return dp[i][j]=0;
        if(dp[i][j]!=-1) return dp[i][j];
        
        dp[i][j] = INT_MAX;
        for(int k=i;k<j;k++){
            if(ispalindrome(str,i,k)){
               dp[i][j]=min(dp[i][j], solve(str,k+1,j)+1); 
            }                
        }
        return dp[i][j];
    }
    
    int minCut(string str) {
        int n = str.size();
        memset(dp,-1,sizeof(dp));
        memset(dp2,-1,sizeof(dp2));
        return solve(str,0,n-1);
    }
};