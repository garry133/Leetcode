class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]>=target)
        //     {
        //         return(i);
        //     }
        // }
        // return(nums.size());
        return lower_bound(nums.begin(),nums.end(),target)-nums.begin();
    }
};