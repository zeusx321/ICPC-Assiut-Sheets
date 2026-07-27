#include <iostream>
#include <cmath>
using namespace std;

long long sumOfDivisors(long long n){
    if (n == 1) return 1;
    if (n == 2) return 3;
    if (n == 3) return 4;

    long long sum = 0;
    
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        { 
            sum += i;
            if (i != sqrt(n))
            {
                long long b = n / i;
                sum += b;
            }
        }

    }
    return sum; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;

    cin >> n;
    
    cout << sumOfDivisors(n);

    return 0;
}