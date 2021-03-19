#include<bits/stdc++.h>
using namespace std;

int comp(int a, int b){
    return (a < b);
}

int ropeCutting(int rope ,int a ,int b ,int c ,int d, int p){
    if(rope == 0) return p;
    if(rope < 0) return -1;
    int aa = ropeCutting(rope - a, a, b ,c ,d, p +1);
    int ab = ropeCutting(rope - b, a, b ,c ,d, p +1);
    int ac = ropeCutting(rope - c, a, b ,c ,d, p +1);
    int ad = ropeCutting(rope - d, a, b ,c ,d, p +1);
    return max({aa, ab, ac, ad},comp);
}

int main(){
    int
    rope = 5,
    a = 5,
    b = 2,
    c = 1,
    d = 7;
    cout << ropeCutting(rope, a, b ,c ,d, 0) << endl;
    return 0;
}
