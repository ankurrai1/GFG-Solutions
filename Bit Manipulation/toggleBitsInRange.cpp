#include<bits/stdc++.h>

using namespace std;

class Solution {
  public:
    int toggleBits(int N , int L , int R) {
        // bit mask of R to L like 0000000000011111110000000 all ones are toggle area
        int Rmask = ((1  << R) - 1); // will make it as 00000000000111111111 1s from r to zero
        int Lmask = (1 << (L -1)) -1; // will make it as 00000000000000000111
        int mask = Rmask ^ Lmask; // find what will be the mask
        return N ^ mask;
    }
};
