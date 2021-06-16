class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
vector<vector<int>>v(matrix.size(),vector<int>(matrix[0].size(),INT_MAX));
          queue<pair<int, int> > q;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    v[i][j]=0;
                    q.push({i,j});
                }
            }
        }
         int d[4][2] = { { -1, 0 }, { 1, 0 }, { 0, -1 }, { 0, 1 } };
    while (!q.empty()) {
        pair<int,int>p = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            int r = p.first + d[i][0], c = p.second + d[i][1];
            if (r>=0 &&c >= 0 &&r <matrix.size() && c <matrix[0].size()){ 
                if (v[r][c] >v[p.first][p.second] + 1){
                    v[r][c] = v[p.first][p.second] + 1;
                    q.push({r,c });
                }
            }
        }
    }
        return v;
    }
};