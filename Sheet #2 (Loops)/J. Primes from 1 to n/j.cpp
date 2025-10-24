#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    bool flag = false;

    for (int i = 2; i <= x; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            if(i==j || i%j != 0){
                continue;
            }else
            {
                flag = true;
                break;
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