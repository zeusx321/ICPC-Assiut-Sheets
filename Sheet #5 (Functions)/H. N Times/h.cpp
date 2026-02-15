#include <iostream>
using namespace std;

void nTimes(int numRepeat, char x){
    for (int i = 0; i < numRepeat; i++)
    {
        cout << x << " ";
    }
    cout << endl;
    
}

int main() {
    int n;
    cin >> n;

    int numRepeat;
    char x;

    while (n--)
    {
        cin >> numRepeat >> x;
        nTimes(numRepeat, x);
    }
    
}
