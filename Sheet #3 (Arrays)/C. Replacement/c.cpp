#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n], newArr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0)newArr[i] = 2;
        else if(arr[i] == 0) newArr[i] = 0;
        else newArr[i] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << newArr[i] << " ";
    }

}