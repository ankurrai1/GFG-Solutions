#include<bits/stdc++.h>

using namespace std;

int getReverse(long n){
    long re = 0;
    while(n > 0){
        re = (re * 10) + (n % 10);
        n/=10;
    }
    return re;
}

int main(){
    long num;
    cin >> num;
    long reverse = getReverse(num);
    if(num == reverse) cout << "Palindrome";
    else cout << "Not A Palindrome";
    return 0;
}
