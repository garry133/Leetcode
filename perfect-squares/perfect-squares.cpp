class Solution {
public:
    int numSquares(int n) {
       if(ceil(sqrt(n))==floor(sqrt(n))) return 1;
       int t[n+1];
        t[0]=0;
        for(int i=1;i<=n;i++){
            t[i]=INT_MAX;
            for(int j=1;j*j<=i;j++){
                t[i]=min(t[i],t[i-j*j]+1);
            }
            // cout<<t[i]<<" ";
        }
        return t[n];
    }
};