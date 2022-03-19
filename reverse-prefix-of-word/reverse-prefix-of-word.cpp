class Solution {
public:
    string reversePrefix(string word, char ch) {
        // for(int i=0;i<word.size();i++){
        //     if()
        // }
        if(word.find(ch)!=string::npos){
            reverse(word.begin(),word.begin()+word.find(ch)+1);
        }
        return word;
    }
};