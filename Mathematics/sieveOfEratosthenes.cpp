// this method is used to print prime no in range the time complexity in final solutions is
// will be O(nloglogn)

// Problem to print prime no upto given number
#include<bits/stdc++.h>
using namespace std;

// naive solutions

bool isPrime(int n){
  if(n <= 1) return false;
  if(n == 2 || n == 3) return true;
  if(n % 2 == 0 || n % 3 == 0) return false;
  for(int i = 5; i * i <= n; i += 6){
    if(n % i == 0 || n % (i + 2) == 0) return false;
  }
  return true;
}

void printPrimesNaive(int n){
  for(int i = 2; i <= n; i++){
    if(isPrime(i)) cout << i << " ";
  }
}

// Sieve of Eratosthenes Method
// cut all primes in array

void printPrime(int n){
  vector<bool> isPrimes(n+1,true);
  for(int i = 2; i * i <= n; i++){
    if(isPrimes[i]){
      for(int j = i*2; j <= n; j += i){
        isPrimes[j] = false;
      }
    }
  }
  for(int i = 2; i <= n; i++){
    if(isPrimes[i]) cout << i << " ";
  }
}


void printPrimeOpt(int n){
  vector<bool> isPrimes(n+1,true);
  for(int i = 2; i <= n; i++){
    if(isPrimes[i]){
      cout << i << " ";
      for(int j = i*i; j <= n; j += i){
        isPrimes[j] = false;
      }
    }
  }
}


int main(){
  int t;
  cin >> t;
  while(t--){

    int num;
    cin >> num;
    cout << "\n-------------------- NEXT TEST CASE -------------------------\n";
    printPrimesNaive(num);
    cout << "\n-----------------------------------------\n";
    printPrime(num);
    cout << "\n-----------------------------------------\n";
    printPrimeOpt(num);


  }
  return 0;
}
