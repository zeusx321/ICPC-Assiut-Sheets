#include <bits/stdc++.h>
using namespace std;

long long com(int x, int y){
    if(x == y || y == 0) return 1;

    return com(x-1, y-1) + com(x-1, y);
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, r;
    cin >> n >> r;

    if(r > n) cout << 0;
    else cout << com(n, r);
    
    return 0;
} 