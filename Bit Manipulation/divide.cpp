#include<bits/stdc++.h>

using namespace std;

int devide(long long dividend, long long divisor){
    int sign = 1;
    if(divisor < 0 && dividend > 0) sign = -1;
    else if(divisor > 0 && dividend < 0) sign = -1;

    long long q = 0, t = 0;
    dividend = abs(dividend);
    divisor = abs(divisor);
    cout << q << endl;
    for(int i = 31; i >= 0; i--){
        if((t + divisor << i) < dividend){ // (t + divisor * 2 ^ i)
            t += divisor<<i;
            q |= ( 1LL << i); // with which 2 ^ i  we devided divisor * num = > num = 1<<i;
        }
    }
    return q * sign;
}

// find difference to which can cause ERROR
    long long divide(long long dividend, long long divisor)
    {
        int
        sign = (dividend < 0 ) ^ (divisor < 0) ?  // if any of the no is -ve then output is true for same false
                 -1 : 1;

        dividend = abs(dividend);
        divisor = abs(divisor);

        long long q = 0, t = 0;


        for(int i = 31; i >= 0; i--){
            if(t + (divisor << i) <= dividend ){
                t += divisor << i;
                q |= (1LL << i);
            }
        }

        return q * sign;
    }

int main(){
    int a = 43, b = 8;
    cout << devide(a,b) << endl;
    return 0;
}
