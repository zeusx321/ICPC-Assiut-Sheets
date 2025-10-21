#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    char op, equal;

    cin >> x >> op >> y >> equal >> z;

    if (op == '+')
    {
        if ((x+y) == z)
        {
            cout << "Yes";
        }else{
            cout << x+y;
        }
    }else if (op == '-')
    {
        if ((x-y) == z)
        {
            cout << "Yes";
        }else{
            cout << x-y;
        }
    }else if (op == '*')
    {
        if ((x*y) == z)
        {
            cout << "Yes";
        }else{
            cout << x*y;
        }
    }

    return 0;
}