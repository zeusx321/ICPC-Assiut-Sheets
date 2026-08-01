#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int arr[30][30] = {0};

    for (int i = 1; i <= n; i++)
    {
        if(i == 1){
            cout << i << endl;
            arr[0][0] = 1;
            continue;;
        }else if(i == 2){
            cout << 1 << " " << 1 << endl;
            arr[1][0] = 1;
            arr[1][1] = 1;
            continue;
        }

        for (int j = 1; j <= i; j++)
        {
            
            if (j == 1){
                cout << 1 << " ";
                arr[i-1][j-1] = 1;
                continue;
            }else if(j == i){
                cout << 1 << " ";
                arr[i-1][j-1] = 1;
                continue;
            }

            int num = arr[i-2][j-1] + arr[i-2][j-2];
            cout << num << " ";
            arr[i-1][j-1] = num;
        }
        cout << endl;
        
    }
    

    return 0;
}