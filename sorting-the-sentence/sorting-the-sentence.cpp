class Solution {
public:
    string sortSentence(string s) {
        // vector<pair<int,string>>v;
        // string k;
        // for(int i=0;i<s.size()-1;i++){
        //     if(s[i+1]!=' '){
        //         k+=s[i];
        //     }
        //     else{
        //         v.push_back({s[i]-'0',k});
        //         k.clear();
        //         i++;
        //     }
        // }
        // v.push_back({s[s.size()-1]-'0',k});
        // sort(v.begin(),v.end());
        // k.clear();
        // for(int i=0;i<v.size();i++){
        //     k+=v[i].second;
        //     if(i!=v.size()-1)
        //         k+=" ";
        // }
        // return k;
        
        map<char,string>m;
        string temps , finals;
        for(int i=0;i<s.size()-1;i++){
           temps+=s[i];
           if(s[i+1]>='0'&&s[i+1]<='9'){
               m[s[i+1]]=temps;
               temps="";
               i++;
               i++;
           } 
        }
        for(auto &x:m){
            finals+=x.second+' ';
        }
         finals = finals.substr(0,finals.size()-1);
        return finals;
    }
};