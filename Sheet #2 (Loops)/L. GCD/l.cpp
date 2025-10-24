#include <iostream>
using namespace std;

int main() {
    int x, y, min, gcd;
    cin >> x >> y;

    if (x>y)
    {
        min = x;
    }else
    {
        min = y;
    }
    
    

    for (int i = 1; i <= min; i++)
    {
        if (x%i == 0 && y%i == 0)
        {
            gcd = i;
        }else
        {
            continue;
        }
    }

    cout << gcd;

    return 0;
}