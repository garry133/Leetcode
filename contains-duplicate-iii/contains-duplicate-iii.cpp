class Solution {
public:
     bool containsNearbyAlmostDuplicate(vector<int>& nums,long long int k,long long int t) {
    set< long long int> window; 
    for (int i = 0; i < nums.size(); i++) {
        if (i > k) window.erase(nums[i-k-1]); 
        auto pos = window.lower_bound(nums[i] - t); 
        //cout<<*pos<<" ";
        if (pos != window.end() && *pos - nums[i] <= t) return true;
        window.insert(nums[i]);
    }
    return false;
   }
};