// TowerOfHanoi puzzle to solve
#include<bits/stdc++.h>
using namespace std;

void TowerOfHanoi(int n, char T1, char T2, char T3){
    if(n <= 0) return;
    TowerOfHanoi(n-1, T1, T3, T2);
    cout << " move disk " << n << " from " << T1 << " to " << T3 <<endl;
    TowerOfHanoi(n-1, T2, T2, T3);
}

int main(){
    TowerOfHanoi(3, 'A', 'B', 'C');
    return 0;
}
