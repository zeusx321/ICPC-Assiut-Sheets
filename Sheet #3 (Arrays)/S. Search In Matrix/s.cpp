#include <iostream>
using namespace std;

int main() {
    int a, b, n;

    cin >> a >> b;
    int arr[a][b];

    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            cin >> arr[i][j];
        }
    }

    cin >> n;

    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            if(arr[i][j] == n){
                cout << "will not take number";
                return 0;
            }
        }
    }

    cout << "will take number";
    
}
