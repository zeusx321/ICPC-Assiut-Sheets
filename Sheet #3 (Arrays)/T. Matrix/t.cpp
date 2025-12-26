#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;
    int arr[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int a = n-1, sum1 = 0, sum2 = 0;

    for(int i = 0; i < n; i++) {
        sum1 = sum1+ arr[i][i];
        sum2 = sum2+ arr[i][a-i];
    }
    cout << abs(sum1 - sum2);
    
}
