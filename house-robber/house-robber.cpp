class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        if(nums.size()==2){
            return max(nums[0],nums[1]);
        }
        if(nums.size()==3){
            return max(nums[0]+nums[2],nums[1]);
        }
        
        int t[nums.size()];
        t[0]=nums[0];
        t[1]=nums[1];
        t[2]=max(nums[0]+nums[2],nums[1]);
        for(int i=3;i<nums.size();i++){
            t[i]=nums[i]+max(t[i-2],t[i-3]);
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=max(ans,t[i]);
        }
        return ans;
    }
};