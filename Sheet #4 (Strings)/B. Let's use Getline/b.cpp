#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;
    getline(cin, x);

    int index = x.find('\\');

    if (index != string::npos) {
        x.erase(index);
    }

    cout << x;
}
