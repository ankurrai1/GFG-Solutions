// the point to note here is every no can be representa in power of 2;

// fist logic is to find square according to power function in math

// square(n) = 0 if n == 0
//   if n is even
//      square(n) = 4*square(n/2)
//   if n is odd
//      square(n) = 4*square(floor(n/2)) + 4*floor(n/2) + 1

#include<bits/stdc++.h>

using namespace std;

long long square1(long long n){
    if(n == 0) return 0;
    if(n & 1) return (square(n >> 1) << 2) + ((n >> 1 )<<2) + 1;
    return (square(n >> 1) << 2);

}

long long square2(long long n){
    // the logc behind this is every no can be represented in power of two
    // we know that k << 1 === 2 * k
    // lets assume we need to find squar of 5 then we can shift 5 ,2 times which make it 5 * 4 = 20
    // + 5 << 0 => 2^0 * 5 => 5 then 5 * 20 => 25 == 5*5 => (5 << 2) + (5 << 0) => 5 * 4 + 5 *
    // which basically 5 * (4 + 1); because we can represent it in form of 2 so that we can use shift operators
    n = abs(n); // square is always positive
    long long temp = n, shift = 0; // we made copy of n because we need n to multiply with power of to
    long long square = 0;
    while(temp > 0){
        // cout<< temp << endl;
        // find out the highest power of 2 which is less then current num and their shift squeance
        shift = 0;
        while((1 << shift) <= temp) shift++;
        // we are doing shift - 1  because of to make condition true it is more then  temp;
        shift--;
        square += (n << shift); // this is the case of 5 * (2 ^ 2 ) ite 2 => 5 * (2 ^ 0) will break the loop
        temp -= (1 << shift); // reduce so that for next time only 5 is left
    }
    return square;
}

int main(){
    int s = -25, e = 25;
    while(s <= e){
         cout << "method 1 :" <<square1(s) << endl;
         cout << "method 2 :" <<square2(s) << endl;
         s++;
    }

    return 0;
}
