#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;
    cin >> x;

    int freq[128] = {0};

    for (char c : x) {
        freq[c]++;
    }   

    for (int i = 0; i < 128; i++) {
        if (freq[i] != 0) {
            cout << char(i) << " : " << freq[i] << endl;
        }
    }

    return 0;
}
