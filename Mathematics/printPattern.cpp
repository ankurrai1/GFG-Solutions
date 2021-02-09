// pattern is like
// 3 3 3 2 2 2 1 1 1
// 3 3 2 2 1 1
// 3 2 1



void printPat(int n)
{
    for(int i = 0 ; i < n; i++){
        int num = n, count = 1;
        for(int j = 0; j < n * (n - i); j++){
            if(j < (n-i) * count){
                cout << num << " ";
            }
            else{
                num--;
                count++;
                cout << num << " ";
            }

        }
        cout <<"$";
    }
}


//Another solution

int c = n;
while (n){
    for (int i = c; i > 0; i--){
        for (int j = n; j > 0; j--){
            cout << i << " ";
        }
    }
    n--;
    cout << "$";
}
}
