class Solution {
public:
    string capitalizeTitle(string title) {
        int temp=1;
        title[0]=toupper(title[0]);
        for(int i=1;i<title.size();i++){
            if(title[i]!=' '){
                title[i]=tolower(title[i]);
                temp++;
            }
            else{
                if(temp==1){
                    title[i-1]=tolower(title[i-1]);
                }
                else if(temp==2){
                    title[i-2]=tolower(title[i-2]);
                }
                if(i+1<title.size()){
                    title[i+1]=toupper(title[i+1]);
                    i++;
                    temp=1;
                }
                else temp=0;
            }
        }
        if(temp==1){
            title[title.size()-1]=tolower(title[title.size()-1]);
        }
        else if(temp==2){
            title[title.size()-2]=tolower(title[title.size()-2]);
        }
        return title;
    }
};