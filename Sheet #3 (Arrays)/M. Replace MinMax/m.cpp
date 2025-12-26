#include <iostream>
using namespace std;

int main() {
    int n, mini = 100000, maxi = -100000, maxIndex, minIndex;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] < mini) {
            mini = arr[i];
            minIndex = i;
        }

        if (arr[i] > maxi) {
            maxi = arr[i];
            maxIndex = i;
        }

    }

    int swap = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = swap;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

}
