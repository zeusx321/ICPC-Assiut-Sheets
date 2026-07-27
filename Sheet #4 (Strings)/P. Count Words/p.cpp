#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int count = 0;

    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i]) && (i == 0 || !isalpha(s[i-1]))) {
            count++;
        }
    }

    cout << count;
    return 0;
}
