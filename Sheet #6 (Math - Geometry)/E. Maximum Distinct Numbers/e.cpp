#include <iostream>
#include <cmath>
using namespace std;

long long disNum(long long n){
    return (sqrt(1 + 8.0 * n) - 1) / 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;

    cin >> n;
    
    cout << disNum(n);

    return 0;
}