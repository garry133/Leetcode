class Solution {
public:
    bool divisorGame(int N) {
        bool dp[N+1];
        // memset(dp,false,sizeof(dp));
        dp[0]=false;
        dp[1]=false;
        for(int i=2;i<=N;i++)
        { 
            bool temp = false;
            for(int j=1;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    if(dp[i-j]==false)
                    {
                      temp = true;
                      break;
                    } 
                }
            }
            dp[i] = temp;
        }
        return dp[N];
    }
};