class Solution {
public:
    vector<int> partitionLabels(string s) {
        int a[26]={0};
        for(int i=0;i<s.length();i++){
            a[s[i]-'a']=i+1;
        }
        vector<int>v;
        int p=0;
        for(int i=0;i<s.length();i++){
            int k=a[s[i]-'a'];
            for(int j=i+1;j<k;j++){
                k=max(k,a[s[j]-'a']);
            }
            v.push_back(k-p);
            i=k-1;
            p=k;
        }
        return v;
    }
};