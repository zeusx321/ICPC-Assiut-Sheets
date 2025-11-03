#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, num, r, sum;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;

        r = sum = 0;

        int num1 = num;

        for (int j = 0; j < num; j++)
        {
            
            if (num1 == 0)
            {
                break;
            }else if(num1%2 != 0)
            {
                r++;
                num1 /= 2;
            }else{
                num1 /=2;
                continue;
            }

        }
        for (int j = 0; j < r; j++)
        {
            sum = sum + pow(2, j);
        }

        cout << sum << endl;
    }

    return 0;
}