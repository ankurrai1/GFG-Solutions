#include<bits/stdc++.h>

using namespace std;


void print(int arr[], int n ){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// you can assume that evey time the res array will have the n starting element.

void fillNbocci(int arr[], int n, int nbo){
    int sum = 0;
    for(int j = 0; j < nbo; j++) sum += arr[j];

    for(int i = nbo , j = 0; i < n; i++,j++){
        arr[i] = sum;
        sum += arr[i];
        sum -= arr[j];
    }
}

int main(){
    int length = 20;
    int arr[length] = {0,1,1};// settin first 3 for 3Bonacci of size length;
    fillNbocci(arr, length, 3);
    print(arr, length);
    return 0;
}
