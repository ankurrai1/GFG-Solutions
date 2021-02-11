// Given non-zero two integers N and M. The problem is to find the number closest to N and divisible by M.
//  If there are more than one such number, then output the one having maximum absolute value.

// problem is to solve it in constant time using no extra space;


int closestNumber(int N, int M) {
     int q = N/M; // it is integer division which will help to find nearest multipul of M -15 / 6 = -2
	    int n1=q*M; // will help to find lower absolute value abs(-15) and abs(-2 * 6) = -12
	    int n2;
	    if(N*M>0) // we are multipling N AND M to handel the case any of them is negative
	        n2=(M*(q+1)); // if no is positive then (q + 1 will help to find absolute uppar value)
	    else
	        n2=(M*(q-1)); // if no is negative then (q - 1 will help to find absolute uppar value) which is more negative
	    if(abs(n2-N)>abs(N-n1)) // this is added because  to hendel case like 2 3
    	    return n1;          // where n1 or n2 will be zero
    	else                    // to avoid that and make it correct for others as well we do
    	    return n2;          // 3 - 2  > 2 - 0 will be false and n2 is returned
    }
