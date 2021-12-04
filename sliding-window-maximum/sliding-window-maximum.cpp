class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
          // your code here
        int i=0,j=0,ok=0;
        multiset<int>ms;
        vector<int>ans;
        while(j<nums.size()){
            ms.insert(nums[j]);
            if(j-i+1<k)j++;
            else if(j-i+1==k){
                ans.push_back(*ms.rbegin());
                ms.erase(ms.lower_bound(nums[i]));
                i++;
                j++;
            }
        }
        return ans;
    }
};