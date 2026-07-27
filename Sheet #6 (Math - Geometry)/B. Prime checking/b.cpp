#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long num){
    if (num == 2) return true;
    
    if (num < 2 || num%2 == 0) return false;

    int s = sqrt(num);
    
    for (int i = 3; i <= s; i+=2)
    {
        if (num % i == 0) return false;
        
    }
    return true;
}

int main() {
    long long num;
    cin >> num;

    (isPrime(num))? cout << "YES" : cout << "NO";

    return 0;
}
