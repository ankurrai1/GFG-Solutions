#include<bits/stdc++.h>
using namespace std;

int getLastPerson(int n,int k ){
    if(n == 0) return 0;
    return (getLastPerson(n-1, k) + k ) % n;
}

int main(){
    int n = 5, k = 3;
    cout << getLastPerson(n , k) << endl;
    return 0;
}
