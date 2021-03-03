#include<bits/stdc++.h>

using namespace std;

int getbitDiff(int a, int b){
    int countDiffBits = 0;
    while(a||b){
        cout << (a & 1) << " " << (b & 1) << endl;
        if((a & 1) ^ (b & 1)) countDiffBits++;
        a >>= 1;
        b >>= 1;
    }
    return countDiffBits;
}

int main(){
    int a = 10, b = 10;
    cout << getbitDiff(a, b) << endl;
    return 0;
}
