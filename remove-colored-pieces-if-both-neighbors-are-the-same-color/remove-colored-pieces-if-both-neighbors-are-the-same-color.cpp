class Solution {
public:
    bool winnerOfGame(string s) {
        // c.push_back(' ');
        int x=0,y=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A'){
                int a=0;
                while(i<s.size()&&s[i]=='A'){
                    a++;
                    i++;
                }
                if(a>2)
                    x+=a-2;
                i--;
            }
            else{
                int a=0;
                while(i<s.size()&&s[i]=='B'){
                    a++;
                    i++;
                }
                if(a>2)
                    y+=a-2;
                i--; 
            }
        }
        if(x>y)return true;
        return false;
    }
};