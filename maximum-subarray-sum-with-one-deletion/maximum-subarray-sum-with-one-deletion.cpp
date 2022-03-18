class Solution {
public:
    int maximumSum(vector<int>& nums) {
  int run1 = 0, min1 = 0, run2 = 0, min2 = 0, res = INT_MIN;
  for (int n : nums)
  {
      if (run1 <= 0)
          run1 = min1 = 0;
      run1 += n;
      res = max(res, run1 - min1);
      min1 = min(min1, n);
  }
  for (int i = 0, min_i = -1; i < nums.size(); ++i) {
      if (run2 - min2 <= 0) {
          run2 = min2 = 0;
          if (min_i != -1) {
              i = min_i;
              min_i = -1;
              continue;
          }
      }
      run2 += nums[i];
      res = max(res, run2 - min2);
      if (nums[i] < min2) {
          min_i = i;
          min2 = nums[i];
      }
  }
  return res;
}
    
};