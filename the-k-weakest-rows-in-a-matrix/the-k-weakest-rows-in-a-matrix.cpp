class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& m, int k) {
        vector<pair<int,int>>f;
        int c=0;
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[i].size();j++){
                if(m[i][j]==1)
                    c++;
            }
            f.push_back({c,i});
            c=0;
        }
        sort(f.begin(),f.end());
        vector<int>v;
        for(int i=0;i<k;i++){
            v.push_back(f[i].second);
        }
        return v;
    }
};