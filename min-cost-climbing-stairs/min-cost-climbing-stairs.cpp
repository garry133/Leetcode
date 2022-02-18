class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size()+1;
        int t[n];
        t[0]=0;
        t[1]=0;
        for(int i=2;i<n;i++){
            t[i]=min(t[i-1]+cost[i-1],t[i-2]+cost[i-2]);
        }
        return t[n-1];
    }
};