#include <bits/stdc++.h>
using namespace std;

double avg(vector<int> arr, int n, int ind){
    if(n == ind) return 0;

    return arr[ind] + avg(arr, n, ind + 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr.at(i);
    }

    int ind = 0;

    cout << fixed << setprecision(6);

    cout << avg(arr, n, ind) / n;
    
    return 0;
} 