#include <iostream>
using namespace std;

int main() {
    float x;

    cin >> x;

    int y = x;

    if (y==x)
    {
        cout << "int " << y;
    }else
    {
        cout << "float " << y << " " << x-y;
    }
    
    return 0;
}