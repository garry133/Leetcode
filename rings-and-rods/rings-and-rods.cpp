class Solution {
public:
    int countPoints(string r) {
        int res=0,a=0,b=0,c=0;
        map<int,vector<int>>m;
        for(int i=0;i<r.size();i++){
            if(r[i]=='R'){
                a++;
            }
            else if(r[i]=='G'){
                b++;
            }
            else if(r[i]=='B'){
                c++;
            }
            else{
                if(m.find(r[i])==m.end()){
                    m[r[i]].push_back(a);
                    m[r[i]].push_back(b);
                    m[r[i]].push_back(c);
                }
                else{
                    m[r[i]][0]+=a;
                    m[r[i]][1]+=b;
                    m[r[i]][2]+=c;
                }
                a=0;
                b=0;
                c=0;
            }
        }
        for(auto &x:m){
            cout<<x.first<<endl;
            cout<<x.second[0]<<" "<<x.second[1]<<" "<<x.second[2]<<endl;
            if(x.second[0]>0&&x.second[1]>0&&x.second[2]>0)res++;
        }
        return res;
    }
};