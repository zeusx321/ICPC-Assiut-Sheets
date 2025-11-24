#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];

    int mini = arr[0], pos = 1;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] < mini){
            mini = arr[i];
            pos = i+1;
        }else continue;
    }

    cout << mini << " " << pos;
    

}