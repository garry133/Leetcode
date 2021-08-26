
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target){ 
//         int i=0,n=nums.size()-1,k=0;
//         vector<int>v(nums.size());
//         for(int i=0;i<=n;i++){
//             v[i]=nums[i];
//         }
//         sort(nums.begin(),nums.end());
//         while(i<n){
//             if(nums[i]+nums[n]==target){
//                k++;
//                 break; 
//             }
//             else if(nums[i]+nums[n]>target)
//                 n--;
//             else
//                 i++;
//         }
//         if(k==0)
//             return {};
//         int a=-1,b=-1;
//         for(int j=0;j<v.size();j++){
//             if(a==-1&&v[j]==nums[i])
//                 a=j;
//            else if(b==-1&&v[j]==nums[n])
//                 b=j;
//             if(a!=-1&&b!=-1)
//                 break;
//         }
//         return {a,b};
//     }
// };


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){ 
        int i=0,j=nums.size()-1;
        vector<pair<int,int>>v(nums.size());
        for(int i=0;i<=j;i++){
            v[i].first=nums[i];
            v[i].second=i;
        }
        sort(v.begin(),v.end());
         vector<int>ans;
       while(i<j){
           if(v[i].first+v[j].first==target){
               ans.push_back(v[i].second);
               ans.push_back(v[j].second);
               return ans;
           }
           else if(v[i].first+v[j].first>target)
               j--;
           else
               i++;
       }
        return ans;
    }
};
