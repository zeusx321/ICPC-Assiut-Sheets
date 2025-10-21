#include <iostream>
using namespace std;

int main() {
    char num[4];
    cin >> num;
    if(num[0] % 2 == 0) {
        cout << "EVEN" << endl;
    } else {
        cout << "ODD" << endl;
    }
    return 0;
}