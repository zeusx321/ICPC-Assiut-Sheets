#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    string h = "hello";
    int inc = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == h[inc]){
            inc++;
        }
    }

    if(inc == 5) cout << "YES";
    else cout << "NO";

    return 0;
}
