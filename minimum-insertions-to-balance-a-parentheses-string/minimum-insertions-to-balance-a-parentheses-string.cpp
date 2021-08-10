class Solution {
public:
    int minInsertions(string s) {
        stack<char>ss;
        int k=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==')'){
                if(i+1<s.size()){
                    if(s[i+1]==')'){
                        if(ss.size())
                            ss.pop();
                        else
                            k++;
                    }
                    else{
                        if(ss.size()){
                         k++;
                            ss.pop();
                        }
                        else{
                            k+=2;
                        }
                        ss.push(s[i+1]);
                    }
                    i++;
                }
                else{
                    if(ss.size())
                    {
                        ss.pop();
                        k++;
                    }
                    else
                      k+=2;  
                }
            }
            else
                ss.push(s[i]);
        }
        return k+ss.size()*2;
    }
};