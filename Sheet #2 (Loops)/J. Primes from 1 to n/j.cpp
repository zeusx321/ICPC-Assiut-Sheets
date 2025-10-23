#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    bool flag = false;

    for (int i = 2; i <= x; i++)
    {
        for (int j = i; j <= x; j++)
        {
            if(i%2 == 0 ){
                flag = true;
                break;
            }else
            {
                continue;
            }
            
        }
        if (flag)
        {
            flag = false;
            continue;
        }else
        {
            cout << i << " ";
        }
    }

    return 0;
}