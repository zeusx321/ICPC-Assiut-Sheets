#include <bits/stdc++.h>
using namespace std;

static int n, m;

long long path(vector<vector<int>>& arr, int a, int b){
    if (a >= n || b >= m) return -1e18;
    if (a == n - 1 && b == m - 1) return arr[a][b];
    
    long long right = arr[a][b] + path(arr, a, b+1);
    long long bottom = arr[a][b] + path(arr, a+1, b);

    return max(right, bottom);
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int a=0, b=0;
    cout << path(arr, a, b);
    
    
    
    return 0;
} 