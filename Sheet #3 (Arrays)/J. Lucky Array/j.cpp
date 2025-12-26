#include <iostream>
using namespace std;

int main() {
    int n, mini = 10000000, num = 0;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mini = min(mini, arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == mini)
        {
            num++;
        }
        
    }

    if(num % 2 != 0) cout << "Lucky";
    else cout << "Unlucky";


}
