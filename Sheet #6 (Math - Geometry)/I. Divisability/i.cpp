#include <iostream>
#include <cmath>
using namespace std;

long long divisability(int a, int b, int x){
    long long first = (a + x - 1) / x * x;
    long long last = (b / x) * x;

    if (first > last) return 0;

    long long n = (last - first) / x + 1;
    
    return (n * (first + last)) / 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,x;

    cin >> a >> b >> x;
    
    cout << divisability(a,b,x);

    return 0;
}