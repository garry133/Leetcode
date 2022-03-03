class Solution {
public:
    vector<int> countBits(int num) {
        vector<int>v(num+1);
        for(int i=0;i<=num;i++){
          int a=i,cnt=0;
            while(a){
                a=a&(a-1);
                cnt++;
            }
            v[i]=cnt;
        }
        return v;
    }
};