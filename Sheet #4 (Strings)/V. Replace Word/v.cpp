#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int start = s.find('E');

    for (int i = start; i < s.size(); i++)
    {
        if (s[i] == 'E' && s[i+1] == 'G' && s[i+2] == 'Y' && s[i+3] == 'P' && s[i+4] == 'T') s.replace(i, 5, " ");
    }
    
    cout << s;

    return 0;
}