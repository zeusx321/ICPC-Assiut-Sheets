#include <bits/stdc++.h>
using namespace std;

static int a, b;

int ways(int b, int num)
{
    if (num == b) return 1;
    if (num > b) return 0;

    num = ways(b, num+1) + ways(b, num+2) + ways(b, num+3);

    return num;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> a >> b;

    int num = a;

    cout << ways(b,num);

    return 0;
}