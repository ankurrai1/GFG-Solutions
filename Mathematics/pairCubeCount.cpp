// Given N, count all ‘a’(>=1) and ‘b’(>=0) that satisfy the condition a3 + b3 = N.

class Solution {
  public:

    bool is_perfect_cube(int n) {
        int root = round(cbrt(n));
        return n == root * root * root;
    }

    int pairCubeCount(int N) {
        int count = 0;
        for(int i = 1; i*i*i <= N; i++){
            int left = N - (i*i*i);
            if(left == 0) count++;
            else if(is_perfect_cube(left)) count++;
        }
        return count;
    }
};

// second method

class Solution {
  public:
    int pairCubeCount(int N) {

        int count = 0,i;

        // Check for each number 1 to cbrt(N)
    	for (i = 1; i*i*i <= N ; i++)
    	{
    		// Store cube of a number
    		int cb = i*i*i;

    		// Subtract the cube from given N
    		int diff = N - cb;

    		// Check if the difference is also
    		// a perfect cube
    		int cbrtDiff = cbrt(diff);

    		// If yes, then increment count
    		if (cbrtDiff*cbrtDiff*cbrtDiff == diff)
    			count++;
    	}

    	// Return count
    	return count;
    }
};
