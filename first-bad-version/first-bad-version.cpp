// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int e=n,s=1,m;
       while(s<=e)
       {
           m=s+(e-s)/2;
           if(isBadVersion(s)==true)
               return s;
           else if(isBadVersion(m)==false)
               s=m+1;
           else
           {e=m;}
       }
        return 0;
    }
};