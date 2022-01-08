class Solution {
public:
    long long getDescentPeriods(vector<int>& p) {
        long long ans =0,k=0;
        for(int i=0;i<p.size()-1;i++){
            if(p[i]-p[i+1]==1){
                k++;
            }
            else{
                k++;
                ans+=(k*(k+1))/2;
                k=0;
            }
        }
        k++;
        ans+=(k*(k+1))/2;
        return ans;
    }
};