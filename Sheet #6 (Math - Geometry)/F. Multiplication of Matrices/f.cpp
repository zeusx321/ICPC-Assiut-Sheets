#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int rA, cA, rB, cB;

    cin >> rA >> cA;

    int arr1[rA][cA];

    for (int i = 0; i < rA; i++)
    {
        for (int j = 0; j < cA; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cin >> rB >> cB;

    int arr2[rB][cB];

    for (int i = 0; i < rB; i++)
    {
        for (int j = 0; j < cB; j++)
        {
            cin >> arr2[i][j];
        }
    }
    
    for (int i = 0; i < rA; i++)
    {
        for (int j = 0; j < cB; j++)
        {
            int res = 0;
            for (int k = 0; k < cA; k++)
            {
                res += arr1[i][k] * arr2[k][j];
            }
            cout << res<< " ";
        }
        cout << endl;
    }
    

    
    return 0;
}