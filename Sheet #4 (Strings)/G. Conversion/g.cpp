#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;
    cin >> x;

    for (int i = 0; i < x.size(); i++) {
        if(isupper(x[i])){
            x[i] = tolower(x[i]);
        }else if(islower(x[i])){
            x[i] = toupper(x[i]);
        }else if(x[i] == ','){
            x[i] = ' ';
        }
    }

    cout << x;

}
