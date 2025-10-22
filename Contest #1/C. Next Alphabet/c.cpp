#include <iostream>
using namespace std;

int main() {
    char x;
    cin >> x;

    int a = x;

    if(x >= 97 && x <= 121){
        a++;
        x = a;
        cout << x;
    }else if (x == 122)
    {
        a = 97;
        x=a;
        cout << x;
    }
    
    
    return 0;
}
