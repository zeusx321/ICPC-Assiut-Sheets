#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long a, b, c, d;
    double x, y;

    cin >> a >> b >> c >> d;

    x = b * log10(a);
    y = d * log10(c);
    
    if (x > y)
    {
        cout << "YES";
    }else
    {
        cout << "NO";
    }
    
    return 0;
}