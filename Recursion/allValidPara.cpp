// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    void allPatterns(int left, int right, string curr, vector<string> &res){
        if(left == 0 && right == 0){
            res.push_back(curr);
            return;
        }
        if(left > 0) allPatterns(left - 1, right + 1, curr + "(", res);
        if(right > 0) allPatterns(left, right - 1, curr + ")", res);
    }

    vector<string> AllParenthesis(int n)
    {
        vector<string> res;
        allPatterns(n, 0, "", res);
        return res;
    }
};
