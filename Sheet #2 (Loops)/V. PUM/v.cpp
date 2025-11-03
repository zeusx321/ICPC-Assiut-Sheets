#include <iostream>
using namespace std;

int main() {
    int n, num1 = 1, num2 = 2, num3 = 3;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << num1 << " " << num2 << " " << num3 << " " << "PUM" << endl;
        }else
        {
            num1 += 4;
            num2 += 4;
            num3 += 4;
            cout << num1 << " " << num2 << " " << num3 << " " << "PUM" << endl;;
        }
        
        
    }
    
    
    return 0;
}