#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int arr1[a], arr2[b];

    for (int i = 0; i < a; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < b; i++) {
        cin >> arr2[i];
    }

    int index = 0;

    for (int i = 0; i < a; i++) {
        if (arr1[i] == arr2[index]) index++;
    }

    if (index == b) cout << "YES";
    else cout << "NO";
}