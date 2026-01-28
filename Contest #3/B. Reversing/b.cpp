#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100];
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            int left = 0, right = i - 1;
            while (left < right) {
                swap(a[left], a[right]);
                left++;
                right--;
            }
        }
    }

    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;

    return 0;
}
