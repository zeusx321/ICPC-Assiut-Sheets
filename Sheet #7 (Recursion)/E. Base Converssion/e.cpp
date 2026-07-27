#include <bits/stdc++.h>
using namespace std;

void binary(int n){
    if (n == 0) return;

    binary(n/2);

    cout << n%2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int itt, n;
    cin >> itt;

    while(itt--){
        cin >> n;
        if(n==0) cout << 0 << endl;
        binary(n);
        cout << endl;
    }
    
    return 0;
} 