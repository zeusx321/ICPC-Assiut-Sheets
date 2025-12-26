#include <iostream>
using namespace std;

int main() {
    string num;
    int counter, op, x, y;
    counter = op = 0;

    cin >> x >> y;
    cin >> num;

    int arr[num.length()];

    for (int i = 0; i < num.size(); i++)
    {
        arr[i] = num[i];
        if (arr[i] >= 48 && arr[i] <= 57)
        {
            counter++;
        }else if(arr[i] == 45 && i == x) {
            op++;
        }else
        {
            cout << "No";
            return 0;
        }
    }

    if ((x+y == counter) && op == 1) cout << "Yes";
    else cout << "No";

}