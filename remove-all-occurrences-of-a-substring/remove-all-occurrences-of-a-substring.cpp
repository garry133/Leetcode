class Solution {
public:
    string removeOccurrences(string s, string p) {
        // int j=0,n=6;
        // string ans,t;
        // while(true){
        //     int ok=0;
        //   for(int i=0;i<s.size();i++){
        //     if(s[i]==p[j]){
        //         int m=6;
        //         while(i<s.size()&&j<p.size()&&s[i]==p[j]){
        //             t+=s[i];
        //             i++;
        //             j++;
        //         }
        //         if(j==p.size())ok++;
        //         else ans+=t;
        //         t="";
        //         j=0;
        //         i--;
        //     }
        //     else ans+=s[i]; 
        //   }
        //     // cout<<s<<endl;
        //     s=ans;
        //     ans="";
        //     if(ok==0)break;
        // }
        // return s; 
        
         int temp=s.find(p);
      if(temp==s.size())
          return s;
        
        while(temp!=s.size())
        {
            if(temp<s.size())
            s.erase(temp,p.size());
            else
                break;
            temp=s.find(p);
            
        }
        return s;
    }
};