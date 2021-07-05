class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& v, vector<int>& t) {
        vector<vector<int>>ans;
         if(v.size()==0){
             ans.push_back({t[0],t[1]});
             return ans;
         }
        int k=0;
        for(int i=0;i<v.size();i++){
            if(v[i][0]==t[0]&&v[i][1]==t[1])return v;
            if(v[i][0]>=t[0]){
                k=i;
                break;
            }
            else{
                ans.push_back({v[i][0],v[i][1]});
            }
        }
        if(ans.size()==v.size()&&v[v.size()-1][1]>t[1])return v;
            
        if(k==0){
            if(v[v.size()-1][1]<t[0]){
                v.push_back({t[0],t[1]});
                return v;
            }
            if(v[0][0]>t[1]){
                ans.push_back({t[0],t[1]});
                for(int i=0;i<v.size();i++)
                    ans.push_back({v[i][0],v[i][1]});
                return ans;
            }
            if(t[0]<=v[0][1]&&t[1]<=v[0][1]){
                v[0][0]=min(v[0][0],t[0]);
                return v;
            }
           // ans.clear();
        }
            
        if(v[k][0]==t[0]){
            if(v[k][1]<t[1]){
                int m=-1;
                for(int i=k;i<v.size();i++){
                    if(m==0){
                        ans.push_back({v[i][0],v[i][1]});
                    }
                    if(m==-1&&v[i][0]==t[1]){
                        ans.push_back({v[k][0],v[i][1]});
                        m=0;
                    }
                    if(m==-1&&v[i][0]>t[1]){
                        if(v[i-1][1]<t[1]){
                            ans.push_back({v[k][0],t[1]});
                        }
                        else{
                            ans.push_back({v[k][0],v[i-1][1]});
                        }
                        m=0;
                        if(m==0)
                            ans.push_back({v[i][0],v[i][1]});
                    }
                }
                if(m==-1)
                    ans.push_back({v[k][0],max(t[1],v[v.size()-1][1])});
            }
            else
            {
                for(int i=k;i<v.size();i++){
                    ans.push_back({v[i][0],v[i][1]});
                }
            }
        }
        else{
            if(k==0){
                v[k][0]=min(v[k][0],t[0]);
                int m=-1;
                for(int i=k;i<v.size();i++){
                    if(m==0){
                        ans.push_back({v[i][0],v[i][1]});
                    }
                    if(m==-1&&v[i][0]==t[1]){
                        ans[ans.size()-1][1]=v[i][1];
                        // ans.push_back({v[k][0],v[i][1]});
                        m=0;
                    }
                    if(m==-1&&v[i][0]>t[1]){
                        if(v[i-1][1]<t[1]){
                            ans[ans.size()-1][1]=t[1];
                            // ans.push_back({v[k][0],t[1]});
                        }
                        else{
                            ans[ans.size()-1][1]=v[i-1][1];
                            // ans.push_back({v[k][0],v[i-1][1]});
                        }
                        m=0;
                    }
                }
                if(m==-1){
                    if(ans.size()!=0)
                    ans[ans.size()-1][1]=max(t[1],v[v.size()-1][1]);
                    else
                   ans.push_back({v[k][0],max(t[1],v[v.size()-1][1])}); 
                }
                    
            }
            else {
               // cout<<ans.size()<<" ";
                if(v[k-1][1]<t[0])
                    ans.push_back({min(v[k][0],t[0]),v[k][1]});
                int m=-1;
                for(int i=k;i<v.size();i++){
                     if(m==0){
                        ans.push_back({v[i][0],v[i][1]});
                    }
                    if(m==-1&&v[i][0]==t[1]){
                        ans[ans.size()-1][1]=v[i][1];
                        // ans.push_back({v[k-1][0],v[i][1]});
                        m=0;
                    }
                    if(m==-1&&v[i][0]>t[1]){
                        if(v[i-1][1]<t[1]){
                              ans[ans.size()-1][1]=t[1];
                            // ans.push_back({v[k-1][0],t[1]});
                        }
                        else{
                              ans[ans.size()-1][1]=v[i-1][1];
                            // ans.push_back({v[k-1][0],v[i-1][1]});
                        }
                        m=0;
                        if(m==0)
                            ans.push_back({v[i][0],v[i][1]});
                    }
                    
                }
                if(m==-1){
                    ans[ans.size()-1][1]=max(t[1],v[v.size()-1][1]);
                    // ans.push_back({v[k-1][0],max(t[1],v[v.size()-1][1])});
                }
                    
            }
        }
        return ans;
    }
};