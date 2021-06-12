// Conversion to One
// If N is even then divide the number by 2.
// If N is odd then you can either add 1 to it or subtract 1 from it.


#include <bits/stdc++.h>

using namespace std;

long long getStepsToOne(long long n, long long c = 0ll){
    if(n == 1) return c;
    if((n & 1) == 0) return getStepsToOne(n/2, c+1);
    else return min(getStepsToOne(n-1, c+1), getStepsToOne(n+1, c+1));
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << getStepsToOne(n) << endl;
    }
    return 0;
}
