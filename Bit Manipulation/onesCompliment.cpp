#include<bits/stdc++.h>

using namespace std;

class Solution{
public:
    string onesComplement(string s,int N){
        for(int i = 0; i < N; i++){
            s[i] = s[i] == '0'? '1':'0';
        }
        return s;
    }
};

// the above can achieve by xoring the given no with all set bit no of that no of bit
// for given no but here its string 
