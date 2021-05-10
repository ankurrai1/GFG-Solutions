#include <iostream>
using namespace std;


int geek_onacci(int a, int b , int c, int n){
    n -= 3;
    while(n-- > 0){
        int temp = c;
        c = a + b + c;
        a = b;
        b = temp;
    }
    return c;
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a, b, c, n;
	    cin >> a >> b >> c >> n;
	    cout << geek_onacci(a, b, c, n) << endl;
	}
	return 0;
}
