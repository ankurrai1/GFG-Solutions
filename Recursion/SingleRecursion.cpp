#include<bits/stdc++.h>
using namespace std;

void showRecursionFlow(int n){
  if(n == 0) return; // base case

  // before recursion upper level level
  cout << n << " : Upper call Going deep in resusion" << endl;


  showRecursionFlow(n-1); // recursive call


  // after recursion lower level
  cout << n << " : Lower call Going out from recursion" << endl;

}

int main(){
    int value = 5;
    showRecursionFlow(value);
    return 0;
}

//
// Output will be printed
//
// 5 : Upper call Going deep in resusion
// 4 : Upper call Going deep in resusion
// 3 : Upper call Going deep in resusion
// 2 : Upper call Going deep in resusion
// 1 : Upper call Going deep in resusion
// 1 : Lower call Going out from recursion
// 2 : Lower call Going out from recursion
// 3 : Lower call Going out from recursion
// 4 : Lower call Going out from recursion
// 5 : Lower call Going out from recursion
