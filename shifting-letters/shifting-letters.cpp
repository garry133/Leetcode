class Solution {
public:
    string shiftingLetters(string s, vector<int>&ff) {
        vector<long long>f(ff.size());
        f[ff.size()-1]=ff[ff.size()-1];
        for(int i=ff.size()-2;i>=0;i--){
            f[i]=ff[i];
            f[i]+=f[i+1];
        }
            
        for(int i=0;i<s.size();i++){
            s[i]=(((s[i]-'a')+f[i])%26)+'a';
        }
        return s;
    }
};