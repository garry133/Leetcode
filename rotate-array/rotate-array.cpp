class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k%nums.size()==0)
            return;
        else
        {
            vector<int>v(nums.size());
            for(int i=0;i<nums.size();i++)v[i]=nums[i];
            for(int i=0;i<nums.size();i++)nums[(k+i)%nums.size()]=v[i];
            return;
        }
    }
};