#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;
    int x = ch;

    if (x >= 65 && x <= 90)
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }else if (x >= 97 && x <= 122)
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }

    return 0;
}