class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
      int n=nums1.size(),m=nums2.size();
        int i=0,j=0,ans=0;
        while(i<n&&j<m){
            if(nums1[i]<=nums2[j]){
                ans=max(ans,j-i);
                j++;
            }
            else
                i++;
        }
        return ans;
    }
};
  