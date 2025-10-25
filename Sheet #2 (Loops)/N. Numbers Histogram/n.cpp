#include <iostream>
using namespace std;

int main() {
    char op;
    int x, y;

    cin >> op;
    cin >> x;

    while (cin >> y)
    {
        for (int i = 0; i < y; i++)
        {
            cout << op;
        }
        cout << endl;
    }
    

    return 0;
}