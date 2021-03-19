// print pattern like 3 2 1 1 2 3

void printPattern(int n){
    if(n == 0) return;
    cout << n << " ";
    printPattern(n -1);
    cout << n << "  ";
}


// print pattern like 1 2 1 3 1 2 1

void printPattern(int n){
    if(n == 0) return;
    printPattern(n -1);
    cout << n << "  ";
    printPattern(n -1);
}


// log2

int floorLog2(int n){
   if(n == 1) return 0;
   return 1 + floorLog2(n >> 1);
}

//log3

int floorLog3(int n){
   if(n < 3) return 0;
   return 1 + floorLog2(n / 3);
}

// decimal to binary representation

void decimalToBinary(int n){
  if(n == 0) return ;
  decimalToBinary(n >> 1);
  cout << (n&1);
}
