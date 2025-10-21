#include <iostream>
using namespace std;

int main() {
    long long x, y;

    cin >> x >> y;

    int a = x%10;
    int b = y%10;

    cout << a+b;
    
    return 0;
}
