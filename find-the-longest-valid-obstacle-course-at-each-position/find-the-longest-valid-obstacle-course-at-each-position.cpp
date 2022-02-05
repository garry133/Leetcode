class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& ob) {
        vector<int>ans;
        vector<int>r;
        for(int i=0;i<ob.size();i++){
            if(r.empty() || r[r.size() - 1] <= ob[i]){
                r.push_back(ob[i]);
                ans.push_back(r.size());
            }
            else{
                int a= upper_bound(r.begin(), r.end(), ob[i]) - r.begin();
                ans.push_back(a+1);
                r[a] = ob[i];
            }
        }
        return ans;
    }
};