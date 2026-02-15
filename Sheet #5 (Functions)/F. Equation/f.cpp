#include <iostream>
#include <cmath>
using namespace std;

void equation(int a, int b){
    long long sum = 0;
    if(b%2 != 0) b -= 1;
    for (int i = 2; i <= b; i+=2)
    {
        sum += pow(a,i);
    }
    cout << sum;
}

int main() {
    int a, b;
    cin >> a >> b;

    equation(a, b);
}
