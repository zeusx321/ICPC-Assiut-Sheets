#include <iostream>
using namespace std;

void print(int a){
    for (int i = 1; i <= a; i++)
    {
        (i == a)? cout << i : cout << i << " ";
    }   
}

int main() {
    int a;
    cin >> a;
    print(a);
}
