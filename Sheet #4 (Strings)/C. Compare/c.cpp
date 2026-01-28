#include <iostream>
#include <string>
using namespace std;

int main() {
    string x, y;
    getline(cin, x);
    getline(cin, y);

    string s = min(x,y);
    cout << s;
    
}
