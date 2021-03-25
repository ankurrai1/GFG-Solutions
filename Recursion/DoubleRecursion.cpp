#include<bits/stdc++.h>
using namespace std;

void showRecursionFlow(int n){
  if(n == 0) return; // base case

  // before recursion upper level level
  cout << n << " : PRE RECURSION" << endl;
  showRecursionFlow(n-1); // recursive call 1
  cout << n << " : IN BETWEEN RECURSION" << endl;
  showRecursionFlow(n-1); // recursive call 2
  cout << n << " : POST BOTH RECURSION" << endl;
}

int main(){
    int value = 2;
    showRecursionFlow(value);
    return 0;
}


// To Understand you have to draw the tree from root at low level and no of Branches. == recursion call;
// after draw make euler path that  and match with output.

// Output will be printed
// 2 : PRE RECURSION
// 1 : PRE RECURSION
// 1 : IN BETWEEN RECURSION
// 1 : POST BOTH RECURSION
// 2 : IN BETWEEN RECURSION
// 1 : PRE RECURSION                                                                                                                                                        
// 1 : IN BETWEEN RECURSION
// 1 : POST BOTH RECURSION
// 2 : POST BOTH RECURSION
