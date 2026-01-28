#include <iostream>
#include <string>
using namespace std;

int main() {
    string x, y;
    getline(cin, x);
    getline(cin, y);

    cout << x.size() << " " << y.size() << endl;
    cout << x+y << endl;
    
    char s = x[0];
    x[0] = y[0];
    y[0] = s;
    cout << x << " " << y << endl;

    
}
