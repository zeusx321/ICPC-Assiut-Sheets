#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;
    cin >> x;

    int strMid = x.size()/2;
    int strSize = x.size()-1;

    for (int i = 0; i < strMid; i++) {
        if(x[i] != x[strSize-i]) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

}
