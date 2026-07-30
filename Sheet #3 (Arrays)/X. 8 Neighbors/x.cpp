#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;

    cin >> x >> y;

    string arr[x];

    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }

    int a, b;
    cin >> a >> b;
    a--; b--;

    bool flag = true;

    for(int i = a - 1; i <= a + 1; i++)
    {
        for(int j = b - 1; j <= b + 1; j++)
        {
            if(i < 0 || i >= x || j < 0 || j >= y) continue;

            if(i == a && j == b) continue;

            if(arr[i][j] == '.') flag = false;
        }
    }

    (flag)? cout << "yes" : cout << "no";

    return 0;
}