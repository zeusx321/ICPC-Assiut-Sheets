#include <iostream>
using namespace std;

int main() {
    unsigned int x;
    cin >> x;
    long long multi = 1;

    for (int i = 1; i <= x; i++)
    {
        int a;
        cin >> a;

        for (int j = 1; j <= a; j++)
        {
            multi = multi * j;
        }

        cout << multi << endl;
        multi = 1;
    }
    return 0;
}
