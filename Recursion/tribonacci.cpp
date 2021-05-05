class Solution {
public:

    int tribonacci(int n, vector<int> res = {-1}) {
        if(res.find(n) != res.end()) return res[n];
        if(n < 2) return n;
        if(n == 2) return 1;
        int tri = tribonacci(n - 1, res) +
                  tribonacci(n -2, res) +
                  tribonacci(n -3, res);
        res[n] = tri;
        return tri;
    }
};

class Solution {
public:
    int tribonacci(int n, vector<int> res = {0 , 1, 1}) {
        int s = res.size();
        if(n <= (s-1)) return res[n];
        int next = res[s-1] + res[s-2] + res[s -3];
        res.push_back(next);
        return tribonacci(n, res);
    }
};

// better iterative solution

class Solution {
public:

    int tribonacci(int n) {
      int arr[3] = {0, 1, 1};
      for(int i = 3; i <= n; i++){
        arr[i % 3] += (arr[(i +1) %3] + arr[(i + 2) % 3]);
      }
      return arr[n % 3];
    }
};
