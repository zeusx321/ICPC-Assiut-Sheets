#include <iostream>
using namespace std;

int main() {
    int n, numOp = 0;
    cin >> n;

    int arr[n];

    bool flag = true;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    while (flag)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i]%2 != 0)
            {
                flag = false;
                break;
            }else
            {
                arr[i] /= 2;
            }
        }
        if (flag)
        {
            numOp++;
        }
        
    }
    
    cout << numOp;


}