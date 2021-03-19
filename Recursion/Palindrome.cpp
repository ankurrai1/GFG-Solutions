// tail recursive Palindrome test

#include<bits/stdc++.h>
using namespace std;

bool isPalindrom(string str, int s, int e){
    if(s >= e) return true;
    if(str[s] != str[e]) return false;
    return isPalindrom(str,s + 1, e - 1);
}

int main()
{
    cout << isPalindrom("aaabbbbaaa", 0, 9) << endl;
    cout << isPalindrom("ankur", 0, 4) << endl;
    cout << isPalindrom("", 0, 0) << endl;
    cout << isPalindrom("aaaaaa", 0, 5) << endl;
    cout << isPalindrom("aaabbbbaa", 0, 8) << endl;

    return 0;
}
