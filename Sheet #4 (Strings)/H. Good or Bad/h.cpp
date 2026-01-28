#include <iostream>
#include <string>
using namespace std;

int main() {
    int x;
    cin >> x;

    while(x--){
        string x;
        cin >> x;
        int flag = 0;

        for (int i = 0; i < x.size()-2; i++) {
            string a = x.substr(i, 3);
            if(a == "101" || a == "010") {
                cout << "Good" << endl;
                flag = 1;
                break;
            }else{
                continue;
            }
        }
        if(flag == 0) cout << "Bad" << endl;
    }
    

}
