class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        set<int>s;
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    if(s.find(nums1[i])==s.end())ans.push_back(nums1[i]);
                    s.insert(nums1[i]);
                    break;
                }
            }
        }
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums3.size();j++){
                if(nums1[i]==nums3[j]){
                    if(s.find(nums1[i])==s.end())ans.push_back(nums1[i]);
                    s.insert(nums1[i]);
                    break;
                }
            }
        } 
        for(int i=0;i<nums2.size();i++){
            for(int j=0;j<nums3.size();j++){
                if(nums2[i]==nums3[j]){
                    if(s.find(nums2[i])==s.end())ans.push_back(nums2[i]);
                    s.insert(nums2[i]);
                    break;
                }
            }
        }
        return ans;
    }
};