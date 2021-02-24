// Given a number N. The task is to check whether it is sparse or not.
// A number is said to be a sparse number if no two or more
// consecutive bits are set in the binary representation

#include<bits/stdc++.h>

using namespace std;

bool isSparse(int n){
    int last = (n & 1);
    int shifted = n >> 1;
    if(shifted  & last) return false;
    if(shifted & n) return false;
    return true;
}
