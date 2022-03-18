class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int tot1=0,tot2=0,ans=0,j=0;
            for(int i=0;i<arr.size()-1;i++){
                if(j%2==0){
                    if(arr[i]>arr[i+1]){
                      tot1++;
                    }
                    else tot1=0;
                    if(arr[i]<arr[i+1]){
                       tot2++;
                    }
                    else tot2=0;
                }
                else{
                    if(arr[i]<arr[i+1]){
                      tot1++;
                    }
                    else tot1=0;
                    if(arr[i]>arr[i+1]){
                      tot2++;
                    }
                    else tot2=0;
                }
                j++;
                ans=max(ans,max(tot1,tot2));
            }
        return ans+1;
    }
};