#include <iostream>
using namespace std;

int main() {
    int n,sum = 0;
    cin >> n;
    string x; 
    cin >> x;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = x[i] - '0';
        sum += arr[i];
    }
    
    cout << sum;
}
