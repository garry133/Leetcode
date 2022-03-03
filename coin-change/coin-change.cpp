class Solution {
public:
    int t[13][10001];
    int solve(int n,vector<int>& coins, int amount){
        if(n==0)return INT_MAX-1;
        if(amount==0)return 0;
        if(t[n][amount]!=-1)return t[n][amount];
        if(coins[n-1]<=amount){
            return t[n][amount] = min(1+solve(n,coins,amount-coins[n-1]),solve(n-1,coins,amount));
        }
        else return t[n][amount] = solve(n-1,coins,amount);
    }
    int coinChange(vector<int>& coins, int amount) {

        // int t[coins.size()+1][amount+1];
        //     for(int i=0;i<=coins.size();i++)t[i][0]=0;
        //     for(int j=0;j<=amount;j++)t[0][j]=INT_MAX-1;
        //     for(int j=0;j<=amount;j++){
        //         if(j%coins[0]==0)t[1][j]=j/coins[0];
        //         else t[1][j]=INT_MAX-1;
        //     }
        //   for(int i=2;i<=coins.size();i++){
        //       for(int j=1;j<=amount;j++){
        //           if(coins[i-1]<=j){
        //               t[i][j]=min(1+t[i][j-coins[i-1]],t[i-1][j]);
        //           }
        //           else t[i][j]=t[i-1][j];
        //       }
        //   }
        // return t[coins.size()][amount];
        
        int ans;
        memset(t,-1,sizeof(t));
        ans=solve(coins.size(),coins,amount);
        return ans==INT_MAX-1? -1:ans;
    }
};