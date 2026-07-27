#include <iostream>
using namespace std;

long long sum(long long a, long long b){
    return 1LL * (b - a + 1) * (a + b) / 2;
}

long long even(long long a, long long b){
    if (a % 2 != 0) a++;
    if (b % 2 != 0) b--;

    if (a > b) return 0;

    long long n = (b - a) / 2 + 1;
    return 1LL * n * (a + b) / 2;
}

long long odd(long long a, long long b){
    if (a % 2 == 0) a++;
    if (b % 2 == 0) b--;

    if (a > b) return 0;

    long long x = (b + 1) / 2;
    long long y = (a - 1) / 2;
    return 1LL * x * x - 1LL * y * y;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b;
    cin >> a >> b;

    long long mini = min(a, b);
    long long maxi = max(a, b);

    cout << sum(mini, maxi) << "\n";
    cout << even(mini, maxi) << "\n";
    cout << odd(mini, maxi) << "\n";

    return 0;
}