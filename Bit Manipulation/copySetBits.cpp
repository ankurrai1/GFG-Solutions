// Given two numbers x and y, and a range [l, r] where 1 <= l, r <= 32.
//  The task is consider set bits of y in range [l, r] and set these bits in x also


#include<bits/stdc++.h>

using namespace std;


int getCopiedBits(int a, int b, int l, int r){
    int pattern = (1<<(r-1));

    int i = r;
    while(i >= l){
        a = a|(b & pattern);
        pattern >>= 1;
        i--;
    }
    return a;

}

// constant time solution for
int getCopiedBits(int a, int b, int l, int r){
    int pattern = (1<< (r - l + 1)) - 1; // creating pattern of sizeof r - l with only 1's
    pattern <<= (l - 1); // shifting pattern to that position
    return (a | (pattern & b)); // you can understand other wise leave coding
}

int main(){
    int x = 8, y = 7, l = 1, r = 2;
    cout << getCopiedBits(x, y, l, r) << endl;
    return 0;
}
