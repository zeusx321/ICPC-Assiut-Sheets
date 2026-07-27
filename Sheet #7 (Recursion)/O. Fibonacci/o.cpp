#include <bits/stdc++.h>
using namespace std;

int fab(int n){
    if(n == 1) return 0;
    if(n == 2) return 1;

    return fab(n-1) + fab(n-2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cout << fab(n);
    
    return 0;
} 