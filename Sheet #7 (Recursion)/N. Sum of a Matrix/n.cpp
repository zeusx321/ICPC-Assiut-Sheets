#include <bits/stdc++.h>
using namespace std;

void sum(int n, int k, vector<vector <int>> arr1, vector<vector <int>> arr2){
    if (k == 0) return;
    
    sum(n, k-1, arr1, arr2);

    cout << (arr1[n][k-1] + arr2[n][k-1]) << " ";
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<vector<int>> arr1(n, vector<int>(k));
    vector<vector<int>> arr2(n, vector<int>(k));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cin >> arr1[i][j];
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cin >> arr2[i][j];
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        sum(i, k, arr1, arr2);
        cout << endl;
    }
    

    return 0;
} 