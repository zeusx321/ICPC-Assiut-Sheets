#include <bits/stdc++.h>
using namespace std;

static int n, X;

bool v(int arr[], int i, int sum)
{
    if (i == n) return sum == X;

    bool add = v(arr, i + 1, sum + arr[i]);
    bool subtract = v(arr, i + 1, sum - arr[i]);

    return add || subtract;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> X;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << (v(arr, 1, arr[0]) ? "YES" : "NO");

    return 0;
}