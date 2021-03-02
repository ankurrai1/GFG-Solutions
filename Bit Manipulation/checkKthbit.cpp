
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 5, k = 2;
    // using left shift operator
    if(n & (1 << (k-1))) cout << "yes set" <<endl;
    else cout << "NO" << endl
    // using right shift operator
    if(1 & (n >> (k-1))) cout << "Yes"<<endl;
    else cout << "No" << endl;
    return 0;
}
