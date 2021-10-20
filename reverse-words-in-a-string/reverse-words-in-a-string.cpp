class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        string a;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                a+=s[i];
            }
            else{
                if(a.size()>0)
                    v.push_back(a);
                a="";
            }
        }
        if(a.size()>0)
        v.push_back(a);
        a="";
        for(int i=v.size()-1;i>=0;i--){
            a+=v[i];
            a+=" ";
        }
        return a.substr(0,a.size()-1);
    }
};