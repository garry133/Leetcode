class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        map<int,int>v;
        for(int i=nums2.size()-1;i>=0;i--){
            if(s.empty())
                v[nums2[i]]=-1;
            else if(s.size()>0&&s.top()>nums2[i])
                v[nums2[i]]=(s.top());
            else{
                while(s.size()>0&&s.top()<=nums2[i]){
                    s.pop();
                }
                if(s.size()==0)
                    v[nums2[i]]=(-1);
                else
                    v[nums2[i]]=(s.top());
            }
            s.push(nums2[i]);
        }
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        {
            ans.push_back(v[nums1[i]]);
        }
        return ans;
    }
};