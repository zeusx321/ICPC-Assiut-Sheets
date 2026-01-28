#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n;

    x = n-1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) {
                if(n/2 == i){
                    cout << "X";
                    x--;
                }else{
                    cout << "\\";
                }
            }else if(j == x){
                cout << "/";
                x--;
            }else{
                cout << "*";
            }
            
        }
        cout << endl;
    }
    
    return 0;
}
