#include <iostream>
using namespace std;

int main() {
    int a;

    cin >> a;

    int years = a / 365;
    int month = (a%365) /30;
    int days = (a%365) %30;

    cout << years << " years" << endl;
    cout << month << " months" << endl;
    cout << days << " days" << endl;
    return 0;
}