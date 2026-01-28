#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    long long a[1005];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    long long sum = 0;
    int cnt = 0;

    for (int i = n - 1; i >= 0 && cnt < k; i--) {
        if (a[i] > 0) {
            sum += a[i];
            cnt++;
        } else {
            break;
        }
    }

    cout << sum << endl;
    return 0;
}
