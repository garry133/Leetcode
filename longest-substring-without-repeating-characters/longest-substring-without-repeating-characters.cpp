class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     
//         int result = 0;
//         int left = 0, right =0;
//         map<char, int> last_seen;
//         while (right < s.length() and left < s.length())
//         {
//             if (last_seen.find(s[right]) == last_seen.end())  
//             {
//                 last_seen[s[right]] = right;
//             }
//             else
//             {
//                 if (last_seen[s[right]] >= left)
//                 {
//                     left = last_seen[s[right]] + 1; // update window start and end
//                 }
//             }
                    
//             result = max(result, right-left+1);
//             last_seen[s[right]] = right;
//             right += 1; // move to next char
                        
//         }

//         return result;
        
        int i=0,j=0,ans=0;
        unordered_map<char,int>mp;
        while(j<s.size()){
            mp[s[j]]++;
            if(mp.size()==j-i+1){
                ans=max(ans,j-i+1);
                j++;
            }
            else if(mp.size()<j-i+1){
                while(mp.size()<j-i+1){
                    mp[s[i]]--;
                    if(mp[s[i]]==0)mp.erase(s[i]);
                    i++;
                }
                j++;
            }
        }
        return ans;
    }
};
