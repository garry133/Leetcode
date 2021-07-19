class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
         if (k <= 1) return 0;
        int p = 1, ans = 0, left = 0;
        for (int right = 0; right < nums.size(); right++) {
            p *= nums[right];
            while (p >= k) p /= nums[left++];
            ans += right - left + 1;
        }
        return ans;
    }
};