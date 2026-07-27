#include <bits/stdc++.h>
using namespace std;

int num(int n, int x){
    if(x==n) return x;
    cout << x << endl;
    return num(n, x+1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int x = 1;

    cin >> n;

    cout << num(n, x);
    
    return 0;
}