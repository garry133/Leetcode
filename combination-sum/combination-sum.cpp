// class Solution {
// public:
//     vector<vector<int>> combinationSum(vector<int>& c, int t) {
//          vector<vector<int>>v;
//         int n=c.size();
//         int a[n+1][t+1];
//         for(int j=0;j<=t;j++)a[0][j]=0;
//         for(int i=0;i<=n;i++)a[i][0]=1;
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=t;j++){
//                 if(c[i-1]<=j){
//                     a[i][j]=(a[i][j-c[i-1]]+a[i-1][j]);
//                 }
//                 else
//                     a[i][j]=a[i-1][j];
//             }
//         }
//         cout<<a[n][t];
//         return v;
//     }
// };

class Solution {
public:
    void backtrack(vector<vector<int>>&ans,vector<int>v,vector<int>& c, int t,int s ){
        if(t<0)return;
        else if(t==0){
            ans.push_back(v);
        }
        else{
           for(int i=s;i<c.size();i++){
               v.push_back(c[i]);
               backtrack(ans,v,c,t-c[i],i);
               v.pop_back();
           } 
        }
        
    }
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
         vector<vector<int>>ans;
          vector<int>v;
         backtrack(ans,v,c,t,0);
        return ans;
    }
};