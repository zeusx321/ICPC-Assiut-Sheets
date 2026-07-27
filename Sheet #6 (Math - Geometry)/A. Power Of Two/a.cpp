#include <iostream>
#include <cmath>
using namespace std;

bool powerOfTwo(long long num){
    if(num == 1 || num == 2 || num == 4 || num == 8) return true;
    long long x = 0;
    for (int i = 4; i < 63; i++)
    {
        x = pow(2,i);
        if (x == num) return true;
    }

    return false;
    
}

int main() {
    long long num;
    cin >> num;

    (powerOfTwo(num))? cout << "YES" : cout << "NO";

    return 0;
}
