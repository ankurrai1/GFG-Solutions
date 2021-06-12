#include<bits/stdc++.h>

using namespace std;

long long int getPerfectSquare(long long int n){

    long long int fl, cl;
    double root = sqrt((double)n);

    if(ceil(root) == floor(root)){
         fl = root -1;
         cl = root + 1;
    }
    else{
        fl = floor(root);
        cl = ceil(root);
    }

    fl*=fl;
    cl*=cl;

    if(abs(fl - n) < abs(cl - n)) return fl;
    return cl;
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    long long num;
	    cin >> num;
	    cout <<  getPerfectSquare(num) << endl;
	}
	return 0;
}
