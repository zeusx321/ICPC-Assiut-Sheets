#include <iostream>
#include <cmath>
using namespace std;

long long divisability(int a, int b, int x){
    long long k1 = (a - 1) / x;
    long long k2 = b / x;

    long long first = 1LL * x * k1 * (k1 + 1) / 2;
    long long last = 1LL * x * k2 * (k2 + 1) / 2;

    return last - first;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,x;

    cin >> a >> b >> x;

    if (a > b) swap(a, b);
    
    cout << divisability(a,b,x);

    return 0;
}