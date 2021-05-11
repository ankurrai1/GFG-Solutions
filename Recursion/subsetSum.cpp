class Solution
{
public:
    void generateSubsetSum(vector<int> arr, int i, int sum, vector<int> &sums){
        if(i == arr.size()){
            sums.push_back(sum);
            return;
        }
        generateSubsetSum(arr, i + 1, sum + arr[i], sums);
        generateSubsetSum(arr, i + 1, sum, sums);

    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> res;
        generateSubsetSum(arr, 0, 0, res);
        sort(res.begin(), res.end());
        return res;
    }
};
