#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;

    cin >> a;

    while (a--){
        string x;
        cin >> x;
        if(x.size() <= 10){
            cout << x << endl;
        }else{
            cout << x[0] << x.size() - 2 << x[x.size() - 1] << endl;
        }
    }

}
