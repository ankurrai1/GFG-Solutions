#include<bits/stdc++.h>

using namespace std;

bool isPrime(long num){
    if(num <= 1 ) return false;
    if(num == 2 || num == 3) return true;
    if(num % 2 == 0 || num % 3 == 0) return false;
    for(int i = 5; i * i < num; i+=6){
        if(num % i == 0 || num % (i+2) == 0) return false;
    }
    return true;
}

// naive implementation of getting prime factors

void PrintPrimeFactorsNaive(long n){
    long count = 2;
    while(count < n){
        if(isPrime(count)){
            long i =  count;
            while(n % i == 0){
                cout << count << " ";
                i *= count;
            }
        }
        count++;
    }

}

int main(){
    long num;
    cin >> num;
    PrintPrimeFactorsNaive(num);
    return 0;
}
