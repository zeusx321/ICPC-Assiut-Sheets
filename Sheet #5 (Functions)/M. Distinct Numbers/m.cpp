#include <bits/stdc++.h>
using namespace std;

void getNum(vector<int>& arr, int num) {
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }
}

void distinct(vector<int> arr, int num) {
    if (num == 0) {
        cout << 0;
        return;
    }

    sort(arr.begin(), arr.end());

    int distinctNum = 1;

    for (int i = 1; i < num; i++) {
        if (arr[i] != arr[i - 1]) {
            distinctNum++;
        }
    }

    cout << distinctNum;
}

int main() {
    int num;
    cin >> num;

    vector<int> arr(num);

    getNum(arr, num);

    distinct(arr, num);

    return 0;
}