#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int mini = 1000000000;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        mini = min(mini, a);
        count++;

        if (count == x) {
            cout << mini << " ";
            mini = 1000000000;
            count = 0;
        }
    }

    if (count > 0) {
        cout << mini;
    }

    return 0;
}
