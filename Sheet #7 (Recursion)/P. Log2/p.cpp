#include <bits/stdc++.h>
using namespace std;

long long logFun(long long n){
    if(n == 1) return 0;

    return 1 + logFun(n/2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    cout << logFun(n);
    
    return 0;
} 