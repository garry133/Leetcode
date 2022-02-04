class Solution {
public:
    // vector<int> sortArrayByParityII(vector<int>& A) {
    //     vector<int>v(A.size());
    //     int j=1,k=0;
    //     for(int i=0;i<A.size();i++)
    //     {
    //         if(A[i]&1)
    //         {
    //             v[j]=A[i];
    //             j+=2;
    //         }
    //         else
    //         {
    //             v[k]=A[i];
    //             k+=2;
    //         } 
    //     }
    //     return v;
    // }
    
    vector<int> sortArrayByParityII(vector<int>& A) {
    for (int i = 0, j = 1; i < A.size(); i += 2, j += 2) {
        while (i < A.size() && A[i] % 2 == 0) i += 2;
        while (j < A.size() && A[j] % 2 == 1) j += 2;
        if (i < A.size()) swap(A[i], A[j]);
    }
    return A;
  }
};