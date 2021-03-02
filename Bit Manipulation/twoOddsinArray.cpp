#include<bits/stdc++.h>

using namespace std;

typedef pair<int, int> p;

p getOddTow(int arr[], int n){
    int res1 = 0, res2 = 0, xr = 0;

    // xor will put both odd elements togather;
    for(int i = 0; i < n; i++){
        xr ^= arr[i];
    }

    // now we can do filter at any set bit  but we will do on right most bit;
    // we will do xor of both groups togather to find
    int c = xr & ~(xr - 1); // this will create a pattern on the basis of first set bit from right all other will be zero

    for(int i = 0; i < n; i++){

        // here every no will have 2 of it in two groups other wise it is the no in that group
        // we will filter them out on the basis of high bit
        // because high bit show one bit is low and another is high
        if(arr[i] & c) res1 ^= arr[i];
        else res2 ^= arr[i];
    }
    return make_pair(res1, res2);
};

int main(){
    int arr[] = {7, 9, 6, 7, 4 , 9, 5, 4};

    p res = getOddTow(arr, 8);

    cout << res.first << res.second << "\n";

    return 0;
}
