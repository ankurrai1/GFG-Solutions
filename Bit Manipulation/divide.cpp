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
        if(t + (divisor << i) < dividend){ // (t + divisor * 2 ^ i)
            t += divisor<<i;
            q |= ( 1LL << i); // with which 2 ^ i  we devided divisor * num = > num = 1<<i;
        }
    }
    return q * sign;
}

int main(){
    int a = 43, b = 8;
    cout << devide(a,b) << endl;
    return 0;
}
