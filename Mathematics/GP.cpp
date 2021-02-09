// task is to find GPs nth term under modulus.

class Solution{
	public:

	long power(int a, int b){
	    if(b == 0) return 1;
	    long temp = power(a, b/2);
	    temp = temp * temp;
	    temp %= 1000000007;
	    if(b & 1) {
	        long res  =  temp * a;
	        res %= 1000000007;
	        return res;
	    }
	    else return temp;
	}

   	long Nth_term(int a, int r, int n){
   	    long ans = (a * power(r, (n-1)));
   	    ans %= 1000000007;
   	    return ans;
   	}
};
