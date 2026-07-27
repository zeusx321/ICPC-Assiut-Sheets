#include <bits/stdc++.h>
using namespace std;

long long knapsack(int index, int arr[][2], int w, int n){
    if(index == n) return 0;

    if(arr[index][0] > w) return knapsack(index + 1, arr, w, n);

    long long take = arr[index][1] + knapsack(index + 1, arr, w - arr[index][0], n);
    long long skip = knapsack(index + 1, arr, w, n);

    return max(take, skip);
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, w;
    cin >> n >> w;

    int arr[n][2];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
        
    }

    int sum = 0, index = 0;

    cout << knapsack(index, arr, w, n);
    
    
    return 0;
} 