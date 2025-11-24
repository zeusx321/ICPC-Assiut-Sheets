#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n],reversedArr[n];
    bool flag = true;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        reversedArr[(n-i)-1] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != reversedArr[i])
        {
            flag = false;
            break;
        }
        
    }

    if(flag) cout << "YES";
    else cout << "NO";
}