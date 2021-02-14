// You are given 2 numbers (n , m); the task is to find n√m (nth root of m).


// following solution have time complexity as O(mlongn)
class Solution{
	public:
	int power(int k, int n){
	     int res = 1;
    while(n){
        if(n & 1){
            res *= k; // until this k's value will take part in power value
        }
        k *= k; // line no 46
        n >>= 1; // shifting bits
    }
    return res;
	}

	int NthRoot(int n, int m)
	{
	    for(int i = 1; i <= m; i++){
	        if(power(i ,n) == m) return i;
	    }
	    return -1;
	}
};
