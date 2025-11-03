#include <iostream>
using namespace std;

int main() {
    int n, num1 = 0, num2 = 1, sum = 0;

    cin >> n;

    cout << num1 << " ";
    if (n > 1){
        cout << num2 << " ";
    }

    for (int i = 2; i < n; i++) {
        sum = num1 + num2;
        cout << sum << " ";
        num1 = num2;
        num2 = sum;
    }

    return 0;
}
