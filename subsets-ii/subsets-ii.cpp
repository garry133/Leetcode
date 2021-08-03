class Solution {
public:
    void solve(vector<int>& nums, set<vector<int>>&st,vector<int>v,int i){
        if(i==nums.size()){
            st.insert(v);
            // for(int j=0;j<v.size();j++)
            //     cout<<v[j]<<" ";
            // cout<<endl;
            return;
        }
        solve(nums,st,v,i+1);
        v.push_back(nums[i]);
        solve(nums,st,v,i+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>v;
        set<vector<int>>st;
        solve(nums,st,v,0);
        for(auto &x:st)
            ans.push_back(x);
        return ans;
    }
};