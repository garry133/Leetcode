class Solution {
public:
    int wateringPlants(vector<int>& p, int c) {
        int ans=0,a=c;
        for(int i=0;i<p.size();i++){
            ans++;
            if(a<p[i]){
                ans+=i;
                a=c;
                ans+=i;
            }
            a-=p[i];
        }
        return ans;
    }
};