class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        // unordered_set<char>t;
        string temp="";
        vector<string>ans;
        for(int i=0;i<s.size();i++){
            // if(t.find(s[i])==t.end()){
                temp+=s[i];
            // }
            if(temp.size()==k){
               ans.push_back(temp);
                temp="";
            }
            // t.insert(s[i]);
        }
        if(temp.size()==0)return ans;
        else{
            k=k-temp.size();
            while(k--){
                temp+=fill;
            }
            ans.push_back(temp);
            return ans;
        } 
    }
};