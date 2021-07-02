class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                for(int k = j + 1; k < n; k++){
                    for(int l = k + 1; l < n; l++){
                        if(nums[i] + nums[j] + nums[k] + nums[l] == target){
                        vector<int> tmp = {nums[i], nums[j], nums[k], nums[l]};
                        sort(tmp.begin(), tmp.end());
                        if(find(ans.begin(), ans.end(), tmp) == ans.end()){
                            ans.push_back(tmp);
                        }
                    }
                    }
                }
            }
        }
        return ans;
    }
};