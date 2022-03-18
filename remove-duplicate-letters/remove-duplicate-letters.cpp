class Solution {
public:
    string removeDuplicateLetters(string s) {
        string res="";
        int last[26]={},used[26]={};
        int n=s.size();
        for(int i=0;i<n;i++)
            last[s[i]-'a']=i;
        for(int i=0;i<n;i++){
            if(used[s[i]-'a']++>0)
                continue;
            while(!res.empty() && res.back()>s[i] && i<last[res.back()-'a']){
                used[res.back()-'a']=0;
                res.pop_back();
            }
            res.push_back(s[i]);
        }
        return res;
    }
};