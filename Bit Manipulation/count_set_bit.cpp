#include<bits/stdc++.h>

using namespace std;


int main(){
  int n = calculateSetbits(5);
  return 0;
}

// it will do this proble in O(no of set bits)
// logic behind is

int calculateSetbits(int n){
  int count = 0;
  while (n > 0){
    // according to example at end the following opration will set rightmost set bit to 0
    // we can use this and count until any bit is set which is no is > 0;
    n &= (n-1);
    count++;
  }
  return count;
}

// 1010000   = 80
// 1001111   = 79 or (80-1)
//
// and will set right most set bit to zero


// efficient solution but need some pre processing time ;

void setTable(int arr[]){
  arr[0] = 0;
  for(int i = 1; i < 256; i++){
    arr[i] = (i & 1) + arr[i/2];  // setting value as arr[i/2] + i%2
  }
}
// the logic behind is every even no has same no of ones in its half binary
// every odd no has +1 no of ones in its binary

int calculateSetbits(int n){
  int table[256];
  setTable(table);
  int count = 0;
  // 4 times for 32 bits and 8 times for 64 bits

  count += table[n&(0xff)] //11111111 == 0xff;
  n >>= 8;
  count += table[n&(0xff)] //11111111 == 0xff;
  n >>= 8;
  count += table[n&(0xff)] //11111111 == 0xff;
  n >>= 8;
  count += table[n&(0xff)] //11111111 == 0xff;
  n >>= 8;

  return count;
}
