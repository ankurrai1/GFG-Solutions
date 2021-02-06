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

int main(){
    long num;
    cin >> num;
    cout << factorialTrallingZero(num) << endl;
    return 0;
}
