#include <iostream>
using namespace std;

int main() {
    int x;

    cin >> x;

    int y = x;

    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << '*';
        }
        cout << endl;
        y--;
        
    }
    
    

    return 0;
}