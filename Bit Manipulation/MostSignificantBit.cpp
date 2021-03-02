#include<bits/stdc++.h>

using namespace std;
// task is to find the most significant bit and its decimal equivalent;

int main(){
    int n = 10;
    int t = log2(n); // this will find the position of most significant bit
    cout << (n & ~(n-1)) << endl; //least singnificant bits decimal representation
    cout << pow(2, t);
    return 0;
}
