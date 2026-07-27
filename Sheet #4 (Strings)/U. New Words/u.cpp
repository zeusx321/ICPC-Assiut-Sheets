#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> arr(5);

    sort(s.begin(), s.end());

    for (int i = 0; i < s.size(); i++)
    {
        if (tolower(s[i]) == 'e') arr[0] += 1;
        if (tolower(s[i]) == 'g') arr[1] += 1;
        if (tolower(s[i]) == 'y') arr[2] += 1;
        if (tolower(s[i]) == 'p') arr[3] += 1;
        if (tolower(s[i]) == 't') arr[4] += 1;
    }
    
    sort(arr.begin(), arr.end());

    cout << arr[0];

    return 0;
}