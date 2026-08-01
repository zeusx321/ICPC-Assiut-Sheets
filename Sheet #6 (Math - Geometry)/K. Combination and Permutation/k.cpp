#include <bits/stdc++.h>
using namespace std;

long long com(int x, int y){
    if(x == y || y == 0) return 1;

    return com(x-1, y-1) + com(x-1, y);
}

long long fac(int x){
    if(x == 0) return 1;

    return x * fac(x-1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, r;
    cin >> n >> r;

    if(r > n) cout << 0 << " " << 0;
    else{ 
        cout << com(n, r) << " ";
        long long npr = fac(n) / fac(n-r);
        cout << npr;
    }
    
    return 0;
} 