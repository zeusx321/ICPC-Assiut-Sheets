#include <iostream>
using namespace std;

int main(){
    int n, searchIn, neg = 0;
    cin >> n;

    int arr [n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> searchIn;

    for (int i = 0; i < n; i++)
    {
        if (searchIn == arr[i])
        {
            cout << i;
            neg++;
            break;
        }
    }
    
    if (neg == 0) cout << "-1";
    

}