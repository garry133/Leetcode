class Solution {
public:
    string customSortString(string o, string str) {
        int a[26]={0};
        string ans;
        for(int i=0;i<o.size();i++){
            a[o[i]-'a']++;
        }
        for(int i=0;i<str.size();i++){
            if(a[str[i]-'a']==0)
                ans+=str[i];
            else
                a[str[i]-'a']++;
        }
        for(int i=0;i<o.size();i++){
            while(a[o[i]-'a']>1){
                ans+=o[i];
                a[o[i]-'a']--;
            }
        }
        return ans;
    }
};