#include <iostream>
using namespace std;

int main() {
    int x, y, z = 0;
    cin >> x >> y;

    
    string a;
    for (int i = x; i <= y; i++)
    {
        bool flag = true;
        a = to_string(i);

        if (i == 4 || i == 7)
        {
            cout << i << " ";
            z++;
            continue;
        }else
        {
            for (int j = 0; j < a.length(); j++)
            {
                if (a[j] == '4' || a[j] == '7')
                {
                    continue;
                }else
                {
                    flag = false;
                    break;
                }
                
            }
        }
        
        if (flag)
        {
            cout << i << " ";
            z++;
        }else
        {
            continue;
        }
    }
    
    if (z==0)
    {
        cout << "-1";
    }
    

    return 0;
}