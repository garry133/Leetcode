class Solution {
public:
    long long countVowels(string w) {
        long long ans=0,a=0;
        a=w.size();
        for(int i=0;i<w.size();i++){
            if(w[i]=='a'||w[i]=='e'||w[i]=='i'||w[i]=='o'||w[i]=='u'){
                  ans+=a*(i+1);
             }
             a--;
        }
        return ans;
    }
};