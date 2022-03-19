class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans=0;
        for(int i=0;i<words.size();i++){
            if(words[i].size()>=pref.size()){
                bool ok=true;
                for(int j=0;j<pref.size();j++){
                    if(pref[j]!=words[i][j]){
                        ok=false;
                        break;
                    }
                }
                if(ok)ans++;
            }
        }
        return ans;
    }
};