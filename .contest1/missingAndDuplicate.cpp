// task is to find  missing no and duplicate no in given array of 1 to N elements of size N.
// given array is in unsorted order


#include <bits/stdc++.h>

using namespace std;

void printShadow(int arr[], int n){
    int missing  = 0, duplicate = 0;

    for(int i = 0; i < n; i++){
        if(arr[abs(arr[i])-1] < 0) duplicate = abs(arr[i]); //abs is used to remove -ve index access
        else arr[abs(arr[i]) - 1] *= -1;
    }

    for(int i = 0; i < n; i++){ // opitive element index will be positive beacuse that is never accessed
        if(arr[i] > 0){
            missing = i+1;
            break;
        }
    }
    cout << duplicate << " " << missing << endl;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int given[n];
        for(int i = 0; i < n; i++) cin >> given[i];

        printShadow(given, n);

    }
    return 0;
}
