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

    int resultArr[rA][cB];
    int x = 0;

    for (int i = 0; i < rA; i++)
    {
        int multi, sum = 0;
        for (int j = 0; j < cB; j++)
        {
            multi = arr1[j][i] * arr2[i][j];
            sum += multi;
        }
        resultArr[i][x];
        x++;
        if (x == cB - 1)
        {
            x = 0;
            i = 
        }
        
    }

    for (int i = 0; i < rA; i++)
    {
        for (int j = 0; j < cB; j++)
        {
            cout << resultArr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}