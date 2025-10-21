#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;
    int x = ch;

    if (x >= 65 && x <= 90)
    {
        x = x+32;
        ch = char(x);
        cout << ch;
    }else if (x >= 97 && x <= 122)
    {
        x = x-32;
        ch = char(x);
        cout << ch;
    }

    return 0;
}