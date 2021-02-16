
class Solution{
	public:
   	long long int prime_Sum(int n){
   	    long long int sum = 0;
   	    vector<bool> isPrimes(n+1,true);
   	    for(int i = 2; i*i <= n; i++){
   	        if(isPrimes[i]){
   	            for(int j = i*i; j <= n; j += i){
   	                isPrimes[j] = false;
   	            }
   	        }
   	    }
   	    for(int i = 2; i <= n; i++){
   	         if(isPrimes[i])

   	    }
   	    return sum;
   	}
};
