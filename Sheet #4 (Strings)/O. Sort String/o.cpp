#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[26] = {0};
    char ch;

    for(int i = 0; i < n; i++){
        cin >> ch;
        arr[ch-'a']++;
    }

    for(int i = 0; i < 26; i++){
        while(arr[i] != 0){
            cout << char(i+'a');
            arr[i]--;
        }
    }

    return 0;
}
