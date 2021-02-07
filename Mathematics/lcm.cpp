// finding lcm using two methods:

#include<bits/stdc++.h>

using namespace std;

long lcmNaive(long a, long b){
    long temp = max(a, b);
    while(temp % a != 0 || temp % b != 0) temp++;
    return temp;
}
int gcdEuclideanTheormOptam(long a, long b){
    if(b == 0) return a;
    return gcdEuclideanTheormOptam(b , a % b);

}

int lcmUsingGCD(long a, long b){
  return ((a*b)/ gcdEuclideanTheormOptam(a,b));
}

int main(){
    long num1, num2;
    cin >> num1 >> num2;
    cout << lcmNaive(num1, num2) << "   " << lcmUsingGCD(num1, num2) <<endl;
    return 0;
}
