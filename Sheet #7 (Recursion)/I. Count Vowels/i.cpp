#include <bits/stdc++.h>
using namespace std;

int words(string s, int n, int num){
    if (s.size() < n)
    {
        return num;
    }
    
    if (s[n] == 'a' || s[n] == 'A')
    {
        return words(s, n + 1, num + 1);
    }

    if (s[n] == 'e' || s[n] == 'E')
    {
        return words(s, n + 1, num + 1);
    }

    if (s[n] == 'i' || s[n] == 'I')
    {
        return words(s, n + 1, num + 1);
    }

    if (s[n] == 'o' || s[n] == 'O')
    {
        return words(s, n + 1, num + 1);
    }

    if (s[n] == 'u' || s[n] == 'U')
    {
        return words(s, n + 1, num + 1);
    }

    return words(s, n + 1, num);

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    int n = 0, num = 0;

    cout << words(s, n, num);

    return 0;
} 