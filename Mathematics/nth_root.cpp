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



// updated solution with time  complexity nlogm

class Solution{
	public:
	int NthRoot(int n, int m)
	{
		long long int low = 1LL, high = m, mid;
		long long int ans = -1;
		while(low <= high){
			mid = (low + high)/2;
			long long int x = mid;
			for(int i = 1; i < n; i++){
				x *= mid;
				if(x > m * 1LL)break;
			}
			if(x == m * 1LL){
				ans = mid;
				break;
			}
			else if(x > m)high = mid - 1;
			else low = mid + 1;
		}
		return int(ans);
	}
};
