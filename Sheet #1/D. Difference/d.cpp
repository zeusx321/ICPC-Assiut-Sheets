#include <iostream>
using namespace std;

int main() {
    long long a, b, c, d;
    
    cin >> a >> b >> c >> d;

    long long diff = (a*b) - (c*d);
    cout << "Difference = " << diff << "\n";

    return 0;
}