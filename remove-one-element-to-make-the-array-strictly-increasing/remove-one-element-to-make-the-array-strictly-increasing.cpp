class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int ok=0;
        for(int i=0;i<nums.size();i++){
            if(i!=0&&i!=nums.size()-1){
              if(nums[i]>=nums[i+1]&&nums[i]>=nums[i-1]){
                if(nums[i+1]<=nums[i-1])
                    nums[i+1]=-1;
                  else
                nums[i]=-1;
                  ok++;
                break;
            }
            if(nums[i]<=nums[i+1]&&nums[i]<=nums[i-1]){
                if(nums[i+1]<=nums[i-1])
                    nums[i-1]=-1;
                  else
                nums[i]=-1;
                ok++;
                break;
            }  
            }
        }
        for(int i=0;i<nums.size()-1;i++){
              if(nums[i+1]==-1){
                  if(i+2<nums.size()&&nums[i]>=nums[i+2])return false;
              }
              else if(nums[i]==-1){}
              else if(nums[i]>=nums[i+1]){
                  if(ok==0){
                      ok++;
                  }
                  else
                      return false;
              } 
        }
        return true;
    }
};