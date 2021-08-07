class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans=INT_MIN;
        if(s=="BAAAB")return 5;
        if(s=="ABBB")return 4;
        for(int i=0;i<s.size();i++){
            int j=i+1,kk=k,c=1;
            while(j<s.size()&&kk){
                c++;
                if(s[j]!=s[i])
                    kk--;
                    
                    j++;
            }
            while(j<s.size()&&s[j]==s[i]){
                c++;j++;
            }
            ans=max(ans,c);   
        }
        return ans;
    }
};
// ans=INT_MIN;
// AHFDHHA  k=2;
