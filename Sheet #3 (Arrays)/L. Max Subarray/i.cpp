#include <iostream>
using namespace std;

int main() {
    int numOfItterations;
    cin >> numOfItterations;

    while(numOfItterations--){
        int n;
        cin >> n;
        
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            int maxi = -1000000;
            for (int j = i; j < n; j++)
            {
                maxi = max(maxi, arr[j]);
                cout << maxi << " ";
            }
            
        }
        cout << endl;   
    }
}
