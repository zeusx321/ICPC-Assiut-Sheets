#include <iostream>
using namespace std;

void sum(int x, int y){
    long long sum = x+y;
    cout << sum;
}

int main() {
    int x, y;
    cin >> x >> y;
    sum(x, y);
}
