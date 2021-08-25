class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       // int currentSum = nums[0];
       //  int currentMax = nums[0];
       //  for (int i = 1; i < nums.size(); i++){
       //      currentSum = max(nums[i], currentSum + nums[i]);
       //      currentMax = max(currentMax, currentSum);
       //  }
       //  return currentMax;
        int tot=0,ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
            tot+=nums[i];
            ans=max(ans,tot);
            if(tot<0)tot=0;
        }
        return ans;
    }
};