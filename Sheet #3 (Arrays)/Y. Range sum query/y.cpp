#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    long long arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 1; i < n; i++){
        arr[i] += arr[i-1];
    }

    int a, b;

    while(q--){
        cin >> a >> b;
        if(a == 1) cout << arr[b-1]<< endl;
        else cout << arr[b-1] - arr[a-2] << endl;
    }
}