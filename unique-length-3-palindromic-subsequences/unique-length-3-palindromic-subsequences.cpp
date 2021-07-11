class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int a[26]={0};
        int ans=0;
        for(int i=0;i<s.size();i++){
            int b[26]={0};
            if(a[s[i]-'a']==0){
                int k=0;
              for(int j=s.size()-1;j>i;j--){
                if(k!=-1&&s[j]==s[i]){
                     k=-1;
                 }
                  else if(k==-1)
                 b[s[j]-'a']++;  
              }
              if(k!=0){
                  for(int i=0;i<26;i++){
                      if(b[i]>0)ans++;
                  }
              }
            }
            a[s[i]-'a']++;
        }
        return ans;
    }
};