class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size(),sum=0,c=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)c++;
            sum+=nums[i];
        }
        if(target>sum||(target+sum)%2!=0)
            return 0;
          sum=(sum+target)/2;
        int t[n+1][sum+1];
        for(int i=0;i<=sum;i++){
            t[0][i]=0;
        }
        for(int i=0;i<=n;i++){
            t[i][0]=1;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
               if(nums[i-1]==0){
                   t[i][j]=t[i-1][j];
               }
               else if(nums[i-1]<=j){
                   t[i][j]=t[i-1][j]+t[i-1][j-nums[i-1]];
               }
               else
                   t[i][j]=t[i-1][j];
            }
        }
        cout<<t[n][sum]<<endl;
        return pow(2,c)*t[n][sum];
    }
};
    
//     int t[21][20001];
//     int solve(vector<int>&nums,int sum,int n){
//         if(sum==0&&n==0) return 1;
//         if(n==0) return 0;
//         if(t[n][sum]!=-1) return t[n][sum];
//         if(nums[n-1]<=sum){
//             return t[n][sum]=(solve(nums,sum-nums[n-1],n-1)+solve(nums,sum,n-1));
//         }
//         else
//             return t[n][sum]=solve(nums,sum,n-1);
//     }
//     int findTargetSumWays(vector<int>& nums, int target) {
//         int n=nums.size(),sum=0;
//         for(int i=0;i<n;i++)
//             sum+=nums[i];
//         if((target+sum)%2!=0)
//             return 0;
//           sum=(sum+target)/2;
//         memset(t,-1,sizeof(t));
//         return solve(nums,sum,n);
//     }
// };
    

//        int dp[21][20001];
//        int subsetSumWays(vector<int>& nums, int sum, int n) {
//         if(dp[n][sum] != -1) {
//             return dp[n][sum];
//         }
        
//         if(sum == 0 && n == 0) {
//             dp[n][sum] = 1;
//             return 1;
//         }
        
//         if(n == 0) {
//             dp[n][sum] = 0;
//             return 0;
//         }
//         if(sum >= nums[n-1]) {
//             dp[n][sum] = subsetSumWays(nums, sum - nums[n-1], n-1) + subsetSumWays(nums, sum, n-1);
//         } else {
//             dp[n][sum] = subsetSumWays(nums, sum, n-1);
//         }
//        return dp[n][sum];
//      }
//        int findTargetSumWays(vector<int>& nums, int target) {
      
//         int totalSum = 0;
//         for(int num : nums) {
//             totalSum = totalSum + num;
//         }
//         if((totalSum + target) % 2 != 0) {
//             return 0;
//         }
//         int expectedSubsetSum = (totalSum + target)/2;
//         int n = nums.size();
//         for(int i = 0 ; i < n+1 ; i++) {
//             for(int j = 0 ; j < expectedSubsetSum + 1 ; j++) {
//                 dp[i][j] = -1;
//             }
//         }
//         return subsetSumWays(nums, expectedSubsetSum, nums.size());
//     }
// };
