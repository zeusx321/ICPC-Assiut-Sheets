#include <iostream>
using namespace std;

int main() {
    int num1, num2, maxi, mini;

    while (cin >> num1 && cin >> num2)
    {
        maxi = max(num1,num2);
        mini = min(num1, num2);
        
        if (mini<=0)
        {
            break;
        }else
        {
            int sum = 0;
            for (int i = mini; i <= maxi; i++)
            {
                cout << i << " ";
                sum += i;
                
            }
            cout << "sum =" << sum << endl;
        }
    }

    return 0;
}