#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, q;

    cin >> n >> q;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);


    while(q--){
        long long l = 0, r = n-1;
        int x;
        cin >> x;

        bool flag = false;

        while (l <= r) {
            long long mid = (r + l) / 2;

            if (arr[mid] == x) {
                flag = true;
                break;
            } else if (arr[mid] < x) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        if (flag)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }
}