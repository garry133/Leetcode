class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& g, vector<int>& t) {
        int d = abs(t[0]) + abs(t[1]);
        for(int i=0;i<g.size();i++)
            if (d >= abs(t[0] - g[i][0]) + abs(t[1] - g[i][1]))
                return false;
        return true;
    }
};