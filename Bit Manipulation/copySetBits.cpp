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

int main(){
    int x = 8, y = 7, l = 1, r = 2;
    cout << getCopiedBits(x, y, l, r) << endl;
    return 0;
}
