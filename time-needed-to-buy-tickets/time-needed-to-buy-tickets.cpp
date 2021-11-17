class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        int ans=0;
        for(int i=0;i<=k;i++){
            if(t[i]<=t[k])ans+=t[i];
            else ans+=t[k];
        }
        for(int i=k+1;i<t.size();i++){
            if(t[i]<t[k])ans+=t[i];
            else ans+=t[k]-1;
        }
        return ans;
    }
};