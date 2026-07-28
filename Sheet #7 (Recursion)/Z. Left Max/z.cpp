#include <bits/stdc++.h>
using namespace std;

int maxs(int arr[], int n, int num, long long maxi)
{
    if(num == n) return 0;

    cout << maxi << " ";

    if (maxi > arr[num+1]) return maxs(arr, n, num+1, maxi);
    else{
        maxi = arr[num+1];
        return maxs(arr, n, num+1, maxi);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int num = 0;
    long long maxi = arr[0];

    maxs(arr, n, num, maxi);
    

    return 0;
}