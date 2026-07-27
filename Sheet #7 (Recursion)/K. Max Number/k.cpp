#include <bits/stdc++.h>
using namespace std;

int maxi(int arr[], int n, int maxs){
    if (n<1) return maxs;
    
    return maxi(arr, n-1, max(maxs, arr[n-1]));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int arr[n];
    int maxs = -1000000000;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << maxi(arr, n, maxs);

    return 0;
} 