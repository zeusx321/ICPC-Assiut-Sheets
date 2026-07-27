#include <bits/stdc++.h>
using namespace std;

bool pal(const vector<int>& arr, int n, bool flag){
    if(n == arr.size() / 2) return flag;

    return pal(arr, n-1, (flag && (arr[n-1] == arr[arr.size() - n])));
    
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
    
    bool flag = true;

    (pal(arr, n, flag))? cout << "YES" : cout << "NO";
    
    return 0;
} 