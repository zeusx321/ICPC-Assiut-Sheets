#include <iostream>
using namespace std;

int main() {
    int n;
    long long num1 = 0, num2 = 1, sum = 0;

    cin >> n;

    if (n == 1)
    {
        cout << num1;
    }else if (n == 2){
    
        cout << num2;
    }else
    {
        for (int i = 2; i < n; i++) {
            sum = num1 + num2;
            num1 = num2;
            num2 = sum;
        }
        cout << sum;
    }

}
