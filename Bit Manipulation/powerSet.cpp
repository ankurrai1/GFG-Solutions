#include<bits/stdc++.h>

using namespace std;

string printCurrentPattern(string str, int pattern){
    string res = "";
    for(int i = 0; i < 32; i++){
        if((1 << i) & pattern) res += str[i];
    }
    return res;
}

void printPowerset(string str, int n){
    for(int i = 0; i < pow(2 ,n); i++){
        cout << printCurrentPattern(str, i) << endl;
    }
}


int main(){

    string str = "ankur";

    printPowerset(str, 5);

    return 0;
}
