// Given a list S that initially contains a single value 0. Below are the Q queries of the following types:
//
// 0 X: Insert X in the list
// 1 X: For every element A in S, replace it by A XOR X.


#include<bits/stdc++.h>

using namespace std;

class Solution {
  public:
    vector<int> constructList(vector<vector<int>> Q, int N) {
        int xr = 0;
        vector<int> res;
        res.push_back(0);
        for(int i = N-1; i >= 0; i--){
            if(Q[i][0] == 1) xr ^= Q[i][1];
            if(Q[i][0] == 0){
                res.push_back(Q[i][1] ^ xr);
            }
        }
        res[0] ^= xr;
        sort(res.begin(), res.end());
        return res;
    }
};
