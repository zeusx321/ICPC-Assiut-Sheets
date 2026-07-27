#include <bits/stdc++.h>
using namespace std;

void even(int arr[], int x, int n){
    if (x-1 < n) return;

    even(arr, x, n+2);

    cout << arr[n] << " ";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;

    int arr[x];
    
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }

    int n = 0;

    even(arr, x, n);
    
    return 0;
} 