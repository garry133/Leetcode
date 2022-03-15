class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<pair<char,int>>v;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')
                v.push({s[i],i});
            else if(s[i]==')'){
                if(v.size()>0&&v.top().first=='('){
                     v.pop();
                } 
                else 
                    v.push({s[i],i});
            }
        }
        if(v.size()==0)
            return s;
        string k="";
        for(int i=s.length()-1;i>=0;i--){
            if(v.size()>0){
              if(i!=v.top().second){
                k+=s[i];
            }
            else
                v.pop();  
            }
            else
                k+=s[i];
        }
      reverse(k.begin(),k.end());
        return k;
    }
};