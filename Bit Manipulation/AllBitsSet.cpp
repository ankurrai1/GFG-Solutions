// Given a number N.
 // You have to check whether every bit in the binary representation of the given number is set or not.

 #include<bits/stdc++.h>

 using namespace std;

 class Solution{
public:
    int isBitSet(int n){
        if(n <= 0) return 0;
        n ++;
        return ((n & (n-1)) == 0);
    }
};
