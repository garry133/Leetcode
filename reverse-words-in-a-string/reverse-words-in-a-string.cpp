// class Solution {
// public:
//     string reverseWords(string s) {
//         vector<string>v;
//         string a;
//         for(int i=0;i<s.size();i++){
//             if(s[i]!=' '){
//                 a+=s[i];
//             }
//             else{
//                 if(a.size()>0)
//                     v.push_back(a);
//                 a="";
//             }
//         }
//         if(a.size()>0)
//         v.push_back(a);
//         a="";
//         for(int i=v.size()-1;i>=0;i--){
//             a+=v[i];
//             if(i!=0)
//             a+=" ";
//         }
//         return a;
//         // return a.substr(0,a.size()-1);
//     }
// };

class Solution {
public:
    string reverseWords(string s) {
        string a,ans;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!=' '){
                a+=s[i];
            }
            else{
                if(a.size()>0){
                    reverse(a.begin(),a.end());
                    ans+=a;
                    ans+=" ";
                }
                a="";
            }
        }
        if(a.size()>0){
            reverse(a.begin(),a.end());
                    ans+=a;
            return ans;
        }
        else return ans.substr(0,ans.size()-1);
    }
};