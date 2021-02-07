// finding lcm using two methods:

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

void PrintPrimeFactorsNaive(long n){
    for(int i = 2; i < n; i++){
        if(isPrime(i)){
            int t =  i;
            while(n % t == 0){
                cout << i << " ";
                t *= i;
            }
        }
    }

}

void PrintPrimeFactors(long n){
  if(n <= 1) return;
  for(int i = 2; i*i <= n; i++){
      while(n % i == 0){
          cout << i << " ";
          n /= i;
      }
  }
  if(n > 1) cout << n << " ";
}

// a more faster way to print prime factors it is 3 times more faster to above same as
// prime test

void PrintPrimeFactorsOpt(long n){
  if(n <= 1) return;
  while(n % 2 == 0){
      cout << 2 << " ";
      n /= 2;
  }
  while(n % 3 == 0){
      cout << 3 << " ";
      n /= 3;
  }
  for(int i = 3; i*i <= n; i+=6){
      while(n % i == 0){
          cout << i << " ";
          n /= i;
      }
      while(n % (i + 2)== 0){
          cout << (i+2) << " ";
          n /= (i+2);
      }
  }
  if(n > 3) cout << n << " ";
}

int main(){
    long num;
    cin >> num;
    PrintPrimeFactorsNaive(num);
    cout << "\n-----------------------------------------\n";
    PrintPrimeFactors(num);
    cout << "\n-----------------------------------------\n";
    PrintPrimeFactorsOpt(num);
    return 0;
}
