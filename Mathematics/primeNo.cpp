#include<bits/stdc++.h>

using namespace std;

// this will hold linear worst time complexity

bool PrimeNaive(long num){
    for(int i = 2; i < num; i++){
        if(num % i == 0) return false;
    }
    return true;
}

// time complexity will be O(n^1/2);

bool improvedPrime(long num){

    for(int i = 2; i * i < num; i++){
        if(num % i == 0) return false;
    }
    return true;

}

// 3 times faster then improvedPrime version

bool isPrime(long num){
    if(num <= 1 ) return false;
    if(num == 2 || num == 3) return true;
    if(num % 2 == 0 || num % 3 == 0) return false;
    for(int i = 5; i * i < num; i+=6){
        if(num % i == 0 || num % (i+2) == 0) return false;
    }
    return true;
}

int main(){
    long num;
    cin >> num;
    cout << PrimeNaive(num) << "   " << improvedPrime(num) << "   " << fastPrime(num) <<endl;
    return 0;
}
