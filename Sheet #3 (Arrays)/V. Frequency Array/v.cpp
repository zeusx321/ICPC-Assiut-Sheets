#include <iostream>
using namespace std;

int main() {
    int a, num;
    cin >> a >> num;

    int arr[a];

    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    int freq[100001] = {0};
    
    for (int i = 0; i <= a; i++) {
        freq[arr[i]]++;
    }

    for (int i = 1; i <= num; i++) {
        cout << freq[i] << endl;
    }
}