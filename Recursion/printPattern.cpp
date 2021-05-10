// Print a sequence of numbers starting with N where A[0] = N,
// without using loop, in which  A[i+1] = A[i] - 5,  until A[i] > 0.
// After that A[i+1] = A[i] + 5  repeat it until A[i] = N.
//
// Input: N = 16
// Output: 16 11 6 1 -4 1 6 11 16


class Solution{
public:
   void getNos(int n, vector<int> &res){
       res.push_back(n);
       if(n <= 0) return;
       getNos(n - 5, res);
       if(res[res.size() -1] == n) return;
       res.push_back(n);
   }
    vector<int> pattern(int N){
        vector<int> res;
        getNos(N, res);
        return res;
    }
};
