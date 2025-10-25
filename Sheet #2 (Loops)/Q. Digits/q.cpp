#include <iostream>
using namespace std;

int main() {
    int numCases;
    long long num;
    cin >> numCases;

    string numStr, reverse;

    while (cin >> num)
    {
        numStr = reverse = to_string(num);
        for (int i = 0; i < numStr.length(); i++)
        {
            reverse[i] = numStr[numStr.length()- i - 1];
        }
        for (int i = 0; i < numStr.length(); i++)
        {
            cout << reverse[i] << " ";
        }
        cout << endl;
        
    }
    

    return 0;
}