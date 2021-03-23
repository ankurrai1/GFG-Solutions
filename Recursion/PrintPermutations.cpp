#include<bits/stdc++.h>
using namespace std;

void StrPermutation(string str, int n, int i = 0){
    if(i+1 >= n){
      cout << str << endl;
      return;
    }
    for(int j = i; j < n; j++){
        swap(str[i], str[j]);
        StrPermutation(str, n , i+1);
        swap(str[i], str[j]);
    }
}

int main(){
  int n = 4;
  string str = "ABCD";
  StrPermutation(str, n);
  return 0;
}
