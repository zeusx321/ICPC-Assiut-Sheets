#include <iostream>
#include <cmath>
using namespace std;

bool primeNum(int num){
    if (num<2) return false;
    if (num == 2) return true;
    if (num%2 == 0) return false;
    int newNum = sqrt(num);
    for (int i = 3; i <= newNum; i++)
    {
        if(num%i == 0) return false;
    }
    return true;
}

int main() {
    int a, num;
    cin >> a;

    while (a--)
    {
        cin >> num;
        (primeNum(num))? cout << "YES" << endl : cout << "NO" << endl;
    }
    
}
