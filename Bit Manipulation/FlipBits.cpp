// Input:
// N = 5
// A[] = {1, 0, 0, 1, 0}
// Output:
// 4
// Explanation:
// We can perform a flip operation in the range [1,2]
// After flip operation array is : [ 1 1 1 1 0 ]
// Count of one after fliping is :


#include<bits/stdc++.h>

using namespace std;


int getmin(int arr[], int n){
    int minSF = n; int cMin = n;
    for(int i = 0; i < n; i++){
        cMin = min(cMin + arr[i], arr[i]);
        minSF = min(minSF, cMin);
    }
    return min(cMin, minSF);
}
int maxOnes(int a[], int n)
{
    int ones = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 0) a[i] = -1;
        else ones += a[i];
    };
    int zeros = getmin(a,n);
    if(zeros <= 0) ones += (-zeros);
    return ones;

}
