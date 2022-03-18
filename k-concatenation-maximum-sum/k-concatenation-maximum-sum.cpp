// class Solution {
// public:
//     int kConcatenationMaxSum(vector<int>& arr, int k) {
//         int tot=0,kk=0;
//         while(k--){
//            for(int i=0;i<arr.size();i++){
//             tot+=arr[i];
//                tot%=(1000000007);
//               kk=max(kk,tot); 
//                 kk=kk%(1000000007); 
//             if(tot<=0){
//                 tot=0;
//             }       
//         } 
//        }
//         return kk;
//     }
// };

class Solution {
public:
    pair< int,int> maxSubArray(vector<int>&a) {
        int ans=a[0],prev=a[0];
        for(int i=1;i<a.size();i++)
        {
            prev=max(a[i],a[i]+prev);
            ans=max(ans,prev);
        }
         
        return{ prev,ans};
        
    }
    const int M=1000000007;
    int kConcatenationMaxSum(vector<int>&a, int k) {
        
        auto res= maxSubArray(a);
        int prev=res.first,ans=res.second;
        if(prev<=0||k==1)return max(ans,0);
        int prev_prev=prev,prev_ans=ans;
        a[0]+=prev;
        res= maxSubArray(a);
        prev=res.first,ans=res.second;
        if(prev_prev==prev)return max(prev_ans,max(ans,0));
        int increase=ans-prev_ans;
       

        return (prev_ans%M+(((long long)k-1)*(increase))%M)%M;
        
    }
};