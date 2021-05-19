class Solution{
public:

    void permute(string s, int  e, int  i, string curr, vector<string> &res){
        if(i == e){
            curr += s[e];
            res.push_back(curr);
            return;
        }
        permute(s, e, i + 1, curr + s[i] + " " , res );
        permute(s, e, i + 1, curr + s[i], res);
    }

    vector<string> permutation(string s, int i = 0){
       vector<string> res;
       permute(s, s.size()-1, 0, "" ,res);
       sort(res.begin(), res.end());
       return res;
    }
}
