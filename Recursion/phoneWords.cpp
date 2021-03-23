// N digit number which is represented by array a[ ],
//  the task is to list all words which are possible by pressing these numbers.

void permute(unordered_map<int,string> hash, int arr[], int i, int n, string res){
    if(i == n){
        cout << res << " ";
        return;
    }
    for(int j = 0; j < hash[arr[i]].size(); j++){
        string data = res + hash[arr[i]][j];
        permute(hash, arr, i + 1, n, data);
    }
}

void possibleWords(int a[],int N)
{
    unordered_map<int, string> hash;
    hash[2] = "abc";
    hash[3] = "def";
    hash[4] = "ghi";
    hash[5] = "jkl";
    hash[6] = "mno";
    hash[7] = "pqrs";
    hash[8] = "tuv";
    hash[9] = "wxyz";
    string res = "";
    permute(hash, a, 0, N, res);
}
