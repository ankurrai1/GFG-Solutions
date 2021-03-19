#include<bits/stdc++.h>
using namespace std;

void printSubsets(string str, int i, string res, int  n){
    if(i >= n){
        cout << res << endl;
        return;
    }

    printSubsets(str, i + 1,  res + str[i], n);
    printSubsets(str, i + 1, res, n);
}

int main(){
    printSubsets("ABC", 0, "", 3);
    return 0;
}
