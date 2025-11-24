#include <iostream>
using namespace std;

int main(){
    int n, mini, index;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        mini = arr[i];
        index = 0;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < mini)
            {
                mini = arr[j];
                index = j;
            }
        }

        int swap = arr[i];
        arr[i] = mini;
        arr[index] = swap;
        
        cout << arr[i] << " ";
    }

}