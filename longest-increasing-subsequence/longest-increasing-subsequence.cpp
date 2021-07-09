class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int t[nums.size()];
        for(int i=0;i<nums.size();i++)t[i]=1;
        for (int i = 1; i < nums.size(); i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] > nums[j]) {
                    t[i] = max(t[i], t[j] + 1);
                }
            }
        }
        //find max number
        int ans=0;
        for(int i=0;i<nums.size();i++)
            ans=max(ans,t[i]);
        return ans;
    }
};