#include <bits/stdc++.h>
using namespace std;

int main() {
    string x;
    getline(cin, x);
    
    string y = "";
    int num = x.find(" ");

    while(true){
        int num = x.find(" ");
        string newS = x.substr(0, num);
        reverse(newS.begin(), newS.end());

        y = newS + " ";
        x.erase(0, num + 1);

        if (x.size() == 0) break;
    }

    cout << y;

    return 0;
}
