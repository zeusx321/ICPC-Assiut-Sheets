#include <iostream>
#include <string>
#include <bitset>
using namespace std;

const int s = 500;

void printArray(int arr[s][s], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void swapRow(int arr[s][s], int n, int x, int y){
    for (int i = 0; i < n; i++)
    {
        int swap = arr[x-1][i];
        arr[x-1][i] = arr[y-1][i];
        arr[y-1][i] = swap;
    }
}

void swapCol(int arr[s][s], int n, int x, int y){
    for (int i = 0; i < n; i++)
    {
        int swap = arr[i][x-1];
        arr[i][x-1] = arr[i][y-1];
        arr[i][y-1] = swap;
    }
}

int main() {
    int n, x, y;

    cin >> n >> x >> y;
    int arr[s][s];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        
    }

    swapRow(arr, n, x, y);
    swapCol(arr, n, x, y);
    printArray(arr, n);


}
