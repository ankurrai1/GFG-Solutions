#include<bits/stdc++.h>
using namespace std;

vector <string> generateCode(int N)
{
    vector<string> res;
    for(int i = 0; i < (1 << N); i++){
        int gray = (i ^ (i >> 1));
        bitset<32> r(gray);
        string rStr  = r.to_string();
        rStr = rStr.substr(32 -N);
        res.push_back(rStr);
    }
    return res;
}
