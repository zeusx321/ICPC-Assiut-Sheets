#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;

    cin >> x;
    long long sum = 0;

    for (int i = 0; i < x.size(); i++) {
        if(x[i] >= 48 && x[i] <= 57){
            int a = x[i] - '0';
            sum += a;
        }else return 0;

    }

    cout << sum;
    
}
