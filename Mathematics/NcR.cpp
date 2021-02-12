// Given two integers n and r, find nCr. Since the answer may be very large, calculate the answer modulo 109+7.

int tr[1001][801] = {0};


class Solution{
    public:
    unsigned long long int nCr(int n, int r){
        makePascalTree();
        if(r>n)
            return 0;
        return tr[n][r];

    }

   int makePascalTree()
   {
       tr[0][0]=1;
       const int M= 1000000007;
       for(int i=1;i<1001;i++)
       {
           tr[i][0]=1;
           for(int j=1;j<i+1;j++)
           {
               tr[i][j]=(tr[i-1][j-1] + tr[i-1][j]) % M;
           }
       }

   }

};

// more optemized solution in the form of space

class Solution{
public:
    int nCr(int n, int r){
        int mod = 1000000007;
        vector<int > C(r+1,0);

        C[0] = 1;
    	for (int i = 1; i <= n; i++) {
        // the main positive point to note it is filling form right to left that is why we
        // have previous row value
    		for (int j = min(i, r); j > 0; j--){
                // nCj = (n-1)Cj + (n-1)C(j-1);
    			C[j] = (C[j] + C[j-1])%mod;
    		}
    	}
    	return C[r]%mod;
    }
};
