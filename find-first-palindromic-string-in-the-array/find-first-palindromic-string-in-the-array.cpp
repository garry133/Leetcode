class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            string k = words[i];
            reverse(k.begin(),k.end());
            if(words[i]==k)return words[i];
        }
        return "";
    }
};