class Solution {
public:
    int findPeakElement(vector<int>& nums) {
    
        int s=0,e=nums.size()-1,m;
        while(s<e){
            m=s+(e-s)/2;
            if(nums[m]>nums[m+1])
                e=m;
            else
                s=m+1;
        }
        return s;
    }
};