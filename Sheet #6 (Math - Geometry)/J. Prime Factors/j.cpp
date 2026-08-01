#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    bool first = true;

    for (long long i = 2; i * i <= n; i++) {
        int cnt = 0;

        while (n % i == 0) {
            cnt++;
            n /= i;
        }

        if (cnt > 0) {
            if (!first) cout << '*';
            cout << "(" << i << "^" << cnt << ")";
            first = false;
        }
    }

    if (n > 1) {
        if (!first) cout << '*';
        cout << "(" << n << "^1)";
    }

    return 0;
}