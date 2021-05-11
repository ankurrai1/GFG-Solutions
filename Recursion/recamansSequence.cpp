// Given an integer n. Print first n elements of Recaman’s sequence.
// It is basically a function with domain and co-domain as natural numbers and 0. It is recursively defined as below:
// Specifically, let a(n) denote the (n+1)-th term. (0 being already there).
// The rule says:
//
// a(0) = 0
// a(n) = a(n-1) - n      if a(n-1) - n > 0 and is not already present in the sequence
//        =  a(n-1) + n    otherwise.


class Solution{
public:
   void solution(int n, int i, vector<int> &res, map<int, int> &s){
       if(i == n) return;
       int curr = res[i-1] - i;
       if(curr > 0 && s.find(curr) == s.end()){
           s[curr]++;
       }
       else{
           curr = res[i - 1] + i;
           s[curr]++;
       }
       res.push_back(curr);
       solution(n, i+1, res, s);
   }

    vector<int> recamanSequence(int n){
        vector<int> res;
        map<int, int> s;
        res.push_back(0);
        solution(n, 1, res, s);
        return res;

    }
};
