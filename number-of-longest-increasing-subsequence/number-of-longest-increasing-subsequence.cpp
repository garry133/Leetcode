class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int t[nums.size()];
        t[0]=1;
        int ways[nums.size()];
        ways[0]=1;
        for(int i=1;i<nums.size();i++){
          t[i]=1;
           for(int j=0;j<i;j++){
               if(nums[i]>nums[j]){
                   t[i]=max(t[i],t[j]+1);
               }
           }
            ways[i]=0;
           for(int j=0;j<i;j++){
               if(nums[i]>nums[j]){
                   if(t[i]==t[j]+1){
                       ways[i]+=ways[j];
                   }
               }
           }
            if(ways[i]==0)ways[i]=1;
        }
        int k=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(k<t[i]){
                k=t[i];
            }
        }
        for(int i=0;i<nums.size();i++){
            if(t[i]==k){
                sum+=ways[i];
            }
        }
        return sum;
    }
};