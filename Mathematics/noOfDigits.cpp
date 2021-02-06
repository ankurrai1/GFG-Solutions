// Task is to find no of digits in given Numbers

#include<bits/stdc++.h>

using namespace std;

int countDigitByLoop(long n){
    int count = 0;
    while(n > 0){
        n/=10;
        count++;
    }
    return count;
}

int countDigitByRecursion(long n){
    if(n == 0) return 0;
    return 1 + countDigitByRecursion(n/10);
}

int countDigitBylog(long n){
    return (log10(n) + 1);
}

int main(){
    long num;
    cin >> num;
    cout << countDigitByLoop(num) << "   " << countDigitByRecursion(num) << "   " << countDigitBylog(num) << endl;
    return 0;
}
