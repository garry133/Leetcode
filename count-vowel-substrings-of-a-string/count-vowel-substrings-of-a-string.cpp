class Solution {
public:
    int countVowelSubstrings(string w) {
        int a=0,e=0,ii=0,o=0,u=0,ans=0;
        string k;
        for(int i=0;i<w.size();i++){
            k+=w[i];
            if(w[i]=='a')a++;
            else if(w[i]=='e')e++;
            else if(w[i]=='i')ii++;
            else if(w[i]=='o')o++;
            else if(w[i]=='u')u++;
            else{
                if(a>0&&e>0&&ii>0&&o>0&&u>0){
                    for(int j=0;j<k.size()-1;j++){
                        a=0;e=0;ii=0;o=0;u=0;
                        for(int z=j;z<k.size()-1;z++){
                          if(k[z]=='a')a++;
                          else if(k[z]=='e')e++;
                          else if(k[z]=='i')ii++;
                          else if(k[z]=='o')o++;
                          else if(k[z]=='u')u++;
                          if(a>0&&e>0&&ii>0&&o>0&&u>0)
                            ans++;  
                        }
                    }
                }
                k="";
                a=0;e=0,ii=0,o=0,u=0;
            }
        }
            if(a>0&&e>0&&ii>0&&o>0&&u>0){
               for(int j=0;j<k.size();j++){
                        a=0;e=0;ii=0;o=0;u=0;
                        for(int z=j;z<k.size();z++){
                          if(k[z]=='a')a++;
                          else if(k[z]=='e')e++;
                          else if(k[z]=='i')ii++;
                          else if(k[z]=='o')o++;
                          else if(k[z]=='u')u++;
                          if(a>0&&e>0&&ii>0&&o>0&&u>0)
                            ans++;  
                        }
                    } 
            }
        return ans;
    }
};