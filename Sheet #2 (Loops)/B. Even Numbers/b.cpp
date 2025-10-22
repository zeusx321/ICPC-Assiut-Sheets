#include <iostream>
using namespace std;

int main() {
    int x;

    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        if(x == 0 || x == 1){
            cout << "-1";
        }else
        {
            if (i%2==0)
            {
                cout << i << endl;
            }
        }
    }
    
    return 0;
}
