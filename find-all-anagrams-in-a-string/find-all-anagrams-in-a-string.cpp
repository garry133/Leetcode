class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int i=0,j=0;
        vector<int>ans;
        int a[26]={0};
        int b[26]={0};
        for(int x=0;x<p.size();x++){
            b[p[x]-'a']++;
        }
        while(j<s.size()){
            a[s[j]-'a']++;
            if(j-i+1<p.size())j++;
            else if(j-i+1==p.size()){
                int ok=1;
                for(int x=0;x<26;x++){
                    if(a[x]!=b[x]){
                      ok=0;  break;
                    }
                }
                if(ok){
                  ans.push_back(i);  
                }
                a[s[i]-'a']--;
                i++;
                j++;
            }
        }
        return ans;
    }
};