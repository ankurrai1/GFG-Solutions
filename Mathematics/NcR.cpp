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
