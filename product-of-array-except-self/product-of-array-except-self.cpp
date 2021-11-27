class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int s=0,ok=0;
        vector<int>v(nums.size());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                if(s==0)
                    s=nums[i];
                else
                 s*=nums[i];   
            }  
            else
                ok++;
        }
        if(ok>1)return v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)v[i]=s;
            else if(ok>0) v[i]=0;
            else v[i]=s/nums[i];
        }
        return v;
    }
};