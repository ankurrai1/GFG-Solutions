#include<bits/stdc++.h>

using namespace std;

void PrintDivisorsSorted(long n){
    int i;
    for(i = 1; i * i < n; i++){
        if(n% i == 0) cout << i << " ";
    }
    for(; i >= 1; i--){
        if(n % i == 0) cout << (n/i) << " ";
    }
}

int main(){
    long num;
    cin >> num;
    PrintDivisorsSorted(num);
    return 0;
}
