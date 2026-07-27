#include <bits/stdc++.h>
using namespace std;

long long sum(int arr[], int n, int m, int x){
    if (m < 0) return 0;
    
    return x + sum(arr, n-1, m-1, arr[n-1]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x = 0;

    cout << sum(arr, n, m, x);
    
    return 0;
} 