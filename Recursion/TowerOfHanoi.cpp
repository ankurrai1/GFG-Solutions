// TowerOfHanoi puzzle to solve
#include<bits/stdc++.h>
using namespace std;

// Think in formo of only 2 disks to move
//                 DiskNo    from      NoUse      to
void TowerOfHanoi(int n,    char T1,  char T2,   char T3){
    if(n <= 0) return;
    TowerOfHanoi(n-1, T1, T3, T2); // 2 Disk = when n = 1 move disk 1 from T1 to T2 ==> this will recurs until n = 1
    cout << " move disk " << n << " from " << T1 << " to " << T3 <<endl; // this will be in order position of all  b/w 2 recursion
    TowerOfHanoi(n-1, T2, T1, T3);
}

int main(){
    TowerOfHanoi(3, 'A', 'B', 'C');
    return 0;
}
