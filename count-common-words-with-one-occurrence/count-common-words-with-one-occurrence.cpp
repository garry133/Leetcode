class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int>m;
        int ans=0;
        for(int i=0;i<words1.size();i++){
            m[words1[i]]++;
        }
        for(int i=0;i<words2.size();i++){
            if(m.find(words2[i])!=m.end()&&m[words2[i]]<=1){
               m[words2[i]]--; 
            }
        }
        for(auto &x:m){
            if(x.second==0)ans++;
        }
        return ans;
    }
};