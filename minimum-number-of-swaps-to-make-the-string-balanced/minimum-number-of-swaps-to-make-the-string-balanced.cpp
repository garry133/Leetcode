class Solution {
public:
    int minSwaps(string s) {
        stack<char>ss;
        for(int i=0;i<s.size();i++){
            if(s[i]==']'){
                if(ss.size())
                    ss.pop();
            }
            else
                ss.push(s[i]);
        }
        return (ss.size()+1)/2;
    }
};