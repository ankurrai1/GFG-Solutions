// Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on.
#include <bits/stdc++.h>

using namespace std;

#define ll long long

//Basic logic
// put some dividend at every i so that if we divide by divisor we will get 1 value as Quotient and if we take MOD we will get second value as Remainder;



// Dividend = Quotient * Divisor + Remainder

// REMAINDER = Dividend % Divisor;
// QUOTIENT  = Dividend / Divisor;

// can think as Quotient as maximum value which will replace current arr[i];
// can think as Remainder as minimum value which is there;
// we can generate Divisor form more then highest value in array say  =  arr[n -1] +  anything

// and by above all we can get dividend to put each place;

void printArray(ll *arr, int n);

void rearrange(ll *arr, int n)
{
    int start = 0 , end = n -1, more_then_max = arr[n-1] + 1; // because given that array is sorted
    for(int i = 0; i < n; i++){

        // we use (arr[end] % more_then_max) to the place of Quotient  because actually when we accessing that value that is changed at that time
        // at index 0 we first set max value but for index 1 we need min so by (arr[end] % more_then_max)  we get out min form 0th place

        if(i % 2 == 0){         // we can observe that every even place has highest value
            arr[i] = more_then_max * (arr[end] % more_then_max) + arr[i];
    //    Dividend =    Divisor    *        Quotient            + Remainder;
            end--;
        }
        else{      // // we can observe that every odd place has lowest value
            arr[i] = more_then_max *(arr[start] % more_then_max) + arr[i];
            start++;
        }
    }
    // we set all dividend as we have to do only Divide not mod according to odd even place to get desired value at place;
    for(int i = 0; i < n; i++){
        arr[i] = arr[i] / more_then_max;
    }
}

void printArray(ll *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n = 11;
    ll arr[]={10,20,30,40,50,60,70,80,90,100,110};
    rearrange(arr, n);
    printArray(arr, n);

}
