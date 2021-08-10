class Solution {
public:
    int minFlipsMonoIncr(string s) {
        // vector<int>v;
        // int c=0,p=0;
        // for(int i=0;i<s.size();i++){
        //     if(s[i]=='1')
        //     {
        //         p++;
        //         if(c!=0)
        //         v.push_back(c);
        //         c=0;
        //     }
        //     else{
        //         if(p!=0)
        //         v.push_back(p);
        //         p=0;
        //         c++;
        //     }
        // }
        int a=0,b=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0')
                a++;
        }
        int ans=a;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0')
            {
                a--;
                ans=min(ans,a+b);
            }
            else{
                b++;
            }
        }
        return ans;
    }
};