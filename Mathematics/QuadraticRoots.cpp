#include<bits/stdc++.h>

using namespace std;

void quadraticRoots(int a,int b, int c)
{
    if((b*b - 4*a*c) < 0){
        cout << "Imaginary" ;
        return;
    }
    int alpha = floor((b*(-1) + sqrt(b*b - 4*a*c))/(2*a));
    int beta = floor((b*(-1) - sqrt(b*b - 4*a*c))/(2*a));

    cout << max(alpha, beta) << " " << min(alpha, beta);
}
