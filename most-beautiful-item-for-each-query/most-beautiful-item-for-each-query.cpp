class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& q) {
        map<int,int>p;
        int kk=INT_MAX;
        for(int i=0;i<items.size();i++){
            kk=min(kk,items[i][0]);
            if(p.find(items[i][0])==p.end())
                p[items[i][0]]=items[i][1];
            else
                p[items[i][0]]=max(p[items[i][0]],items[i][1]);
        }
        vector<int>ans(q.size());
        int k=0;
        for(auto &x:p){
            // cout<<x.first<<" ";
               k=max(x.second,k);
            x.second=k;
        }
        // cout<<endl;
        for(int i=0;i<q.size();i++){
            if(q[i]<kk)
                ans[i]=0;
            else
            {
               auto j=p.lower_bound(q[i]);
               if(j->first==q[i])
               ans[i]=p[j->first]; 
               else
               {
                   j=prev(j);
                   ans[i]=p[j->first];
               }
            }
        }
        // cout<<endl;
        return ans;
    }
};