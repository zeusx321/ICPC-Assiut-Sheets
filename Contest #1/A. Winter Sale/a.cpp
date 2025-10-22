#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << fixed << setprecision(2);

    double res = b/(((double)a / 100) - 1);


    cout << -res;
    return 0;
}
