#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    long long multi = 1;

    for (int i = 1; i <= 12; i++){
        multi = x*i;
        cout << x << " * " << i << " = " << multi << endl;
        multi = 1;
    }
    return 0;
}
