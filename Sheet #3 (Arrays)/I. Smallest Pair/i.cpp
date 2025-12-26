#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;

        long long arr[200000];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long mini = 1e18;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                long long value = arr[i] + arr[j] + (j - i);
                if (value < mini) mini = value;
            }
        }

        cout << mini << "\n";
    }

    return 0;
}