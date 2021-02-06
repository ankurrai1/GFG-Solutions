// finding factorial of given number

#include<bits/stdc++.h>

using namespace std;

int factorialByLoop(long n){
    long fact = 1;
    for(long i = 2; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int FactorialByRecursion(long n){
    if(n == 0) return 1;
    return n * FactorialByRecursion(n-1);
}

int main(){
    long num;
    cin >> num;
    cout << factorialByLoop(num) << "   " << FactorialByRecursion(num) << endl;
    return 0;
}
