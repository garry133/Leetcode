class Solution {
public:
    int integerBreak(int n) {
        // int t[n+1];
        // t[0]=0;
        // t[1]=1;
        // t[2]=1;
        // for(int i=3;i<=n;i++){
        //     int a=i/2,b=i-a;
        //     t[i]=max(t[a]*t[b],a*b);
        // }
        //   return t[n];
        if(n==2)return 1;
        if(n==3)return 2;
        int a=1;
        while(n>1){
            if(n%3==0||n-3>1){
                a*=3;
                n-=3;
            }
            else{
                a*=2;
                n-=2;
            }
        }
        return a;
    }
};