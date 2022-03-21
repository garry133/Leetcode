class Solution {
public:
    int minSteps(string s, string t) {   
        int a[26]={0};
        int ans=0;
        for(int i=0;i<s.size();i++){
            a[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            if(a[t[i]-'a']>0)a[t[i]-'a']--;
            else ans++;
        }
        for(int i=0;i<26;i++)ans+=a[i];
        return ans;
    }
};