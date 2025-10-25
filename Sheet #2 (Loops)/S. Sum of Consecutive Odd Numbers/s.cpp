#include <iostream>
using namespace std;

int main() {
    int numCases, num1, num2, maxi, mini;

    cin >> numCases;

    while (cin >> num1 && cin >> num2)
    {
        maxi = max(num1,num2);
        mini = min(num1, num2);
        
        int sum = 0;
        for (int i = mini+ 1; i < maxi; i++)
        {
            if (i%2 !=0)
            {
                sum += i;
            }
        }
        cout << sum << endl;
    }
    return 0;
}