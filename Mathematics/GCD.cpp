#include<bits/stdc++.h>

using namespace std;

long gcdNaive(long a, long b){
    long temp;
    if(a < b) temp = a;
    else temp = b;
    while(temp > 1){
        if(a % temp == 0 && b % temp == 0) break;
        temp--;
    }
    return temp;
}

int gcdEuclideanTheorm(long a, long b){

    while(a != b ){
        if(a < b) b -= a;
        else a -= b;
    }
    return a;

}

int gcdEuclideanTheormOptam(long a, long b){
    if(b == 0) return a;
    return gcdEuclideanTheormOptam(b , a % b);

}

int main(){
    long num1, num2;
    cin >> num1 >> num2;
    cout << gcdNaive(num1, num2) << "   " << gcdEuclideanTheorm(num1, num2) << "   " << gcdEuclideanTheormOptam(num1, num2) <<endl;
    return 0;
}
