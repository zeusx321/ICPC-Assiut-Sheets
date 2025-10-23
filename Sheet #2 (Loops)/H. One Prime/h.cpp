#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    bool flag = false;

    for (int i = 2; i < x; i++)
    {
        if (x%i==0)
        {
            flag = true;
            break;
        }else
        {
            continue;
        }
    }

    if (flag == false && x > 1)
    {
        cout << "YES";
    }else if(flag == true || x <= 1)
    {
        cout << "NO";
    }

    return 0;
}