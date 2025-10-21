#include <iostream>
using namespace std;

int main() {
    long long a, b, c, d, multi;

    cin >> a >> b >> c >> d;

    a%=100;
    b%=100;
    c%=100;
    d%=100;

    multi = (a * b * c * d) % 100;

    if (multi < 10)
    {
        cout << "0" << multi;
    }else{
        cout << multi;
    }
    

    return 0;
}