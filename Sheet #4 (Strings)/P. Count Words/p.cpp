#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;
    getline(cin, x);

    int count = 0;
    int space = 0;
    bool flag = true;

    for(int i = 0; i < x.size(); i++) {
        if((x[i] >= 'a' && x[i] <= 'z') || (x[i] >= 'A' && x[i] <= 'Z')) {
            count++;
        }
        
        if(count > 0 && x[i] == ' ' && flag) {
            space++;
            count = 0;
            flag = false;
        }
    }

    (count > 0) ? cout << space+1 : cout << space;

    return 0;
}
