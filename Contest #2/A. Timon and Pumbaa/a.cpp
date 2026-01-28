#include <iostream>
using namespace std;

int main() {
    int a, b, diff = 0;
    cin >> a >> b;

    diff = a - b;

    (diff >= 0)? cout << diff : cout << 0;
    
    return 0;
}
