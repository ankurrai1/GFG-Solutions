#include<bits/stdc++.h>
using namespace std;

// naive solutions

int powerNaive(int k, int n){
    int res = 1;
    for(int i = 0; i < n; i++){
        res *= k;
    }
    return res;
}

// coplexity will be log n
// but this will take function stack space in heap

int powerRecursive(int k, int n){
    if(n == 0) return 1;
    int temp = powerRecursive(k, n/2);
    if(n % 2 == 0) return temp * temp;
    else return powerRecursive(k, n-1) * k;
}


// the idea behind this if n is odd then n -1 must be even
// and in process of calculating power using n/2 recursive we must have floored 0.5
// so in the case of odd we are already missing 1 because of floor of .5 and .5
// when we are making temp = temp * temp
// in case of even no floor missing so it will be equal to powof(k , n)
// but in case of odd it missed floored value of .5 and .5 which make it  powof(k, n-1)
// this is why we are using temp in version to although expression is as above solution;

int powerRecursiveV2(int k, int n){
    if(n == 0) return 1;
    int temp = powerRecursive(k, n/2);
    temp = temp * temp;
    if(n % 2 == 0) return temp;
    else return temp * k;
}

// we can represent each power expression in the power of 2 only
// the idea behind this solution is to traves thorough the bits of n
// in bits of n if it is set bit
// eg 3^10 = 3^8   *   3^2
// n = 10 =   1    0     1     0
//           3^8  3^4   3^2   3^1
// you have to pick only 1 place and the power will increase in multiplication of 2
// on the basis of above observation result following is implimented

int powerIterative(int k, int n){
    int res = 1;
    while(n){
        if(n & 1){
            res *= k; // until this k's value will take part in power value
        }
        k *= k; // line no 46
        n >>= 1; // shifting bits
    }
    return res;
}


int main(){
  int t;
  cin >> t;
  while(t--){

    int num , power;
    cin >> num >> power;
    cout << "\n-------------------- NEXT TEST CASE -------------------------\n";
    cout << powerNaive(num , power);
    cout << "\n-----------------------------------------\n";
    cout << powerRecursive(num, power);
    cout << "\n-----------------------------------------\n";
    cout << powerRecursiveV2(num, power);
    cout << "\n-----------------------------------------\n";
    cout << powerIterative(num, power);


  }
  return 0;
}
