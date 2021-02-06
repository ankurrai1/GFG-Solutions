#include<bits/stdc++.h>

using namespace std;

int getCount(int digit, int no){
    int count = 0;
    while(no > 0){
        if(no % digit == 0){
            count++;
            no /= digit;
        }
        else break;
    }
    return count;
}

int factorialTrallingZero(long n){
    int twoCount = 0;
    int fiveCount = 0;
    for(long i = 2; i <= n; i++){
        twoCount += getCount(2, i); // we can leave two because two is always going to less than 5
        fiveCount += getCount(5, i);
    }
    return min(twoCount, fiveCount);
}

int factorialTrallingZeroUseing5(long n){
    int res = 0;
    for(long i = 5; i <= n; i*=5){ // here we are useing 5 Factorization
        res += n / i;              // method every no 5s multipul will have that much no of 5;
    }
    return res;
}

int main(){
    long num;
    cin >> num;
    cout << factorialTrallingZero(num) << "   " << factorialTrallingZeroUseing5(num) <<endl;
    return 0;
}
