// class Solution {
// public:
//     int numRescueBoats(vector<int>& p, int l) {
//         sort(p.begin(),p.end());
//         int a=0,b=0,k=-1;
//         vector<int>v;
//         for(int i=0;i<p.size();i++){
//             if(p[i]>=l){
//                 k=i;
//                 break;
//             }
//             else
//                 v.push_back(p[i]);
//         }
//         int i=0,e=v.size()-1;
//         while(i<e){
//             if(v[i]+v[e]==l){
//                 b++;
//                 i++; e--;
//             }
//             else if(v[i]+v[e]>l){
//                 b++;
//                 e--;
//             }
//             else{
//               int x=v[i]+v[e];
//                 i++;
//                 e--;
//                 while(i<e&&x+v[i]<l)i++;
//                 b++;
//             }     
//         }
//         if(i==e)b++;
//         if(k==-1)
//             return b;
//          return p.size()-k+b;
//     }
// };
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
       
        // sort vector
        sort(people.begin(),people.end());
        
        int i = 0, j = people.size() - 1,cnt = 0;
        
        while(i <= j)
        {   
            // lightest person + heaviest person sum <= limit
            // they can go together
            if(people[i] + people[j] <= limit)
            {
                ++i;
                --j;
            }
            // if sum is over the limit,
            // heaviest will go alone.
            else
                --j;
            
            ++cnt;  // number of boats
        }
        
        return cnt;
        
    }
	// for github repository link go to my profile.
};