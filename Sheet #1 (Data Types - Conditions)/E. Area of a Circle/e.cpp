#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    double a;
    double pi = 3.14159;
    
    cin >> a;

    double area = pi * a * a;
    cout << fixed << setprecision(9);
    cout << area << endl;
    
    return 0;
}

/*

    -- what is cout << fixed << setprecision(9); doing? --
        The line `cout << fixed << setprecision(9);` is used to format the output of floating-point numbers in C++.
        The fixed manipulator tells the output stream to always show the number in decimal (fixed-point) format, not scientific notation.
        setprecision(9) means: Show 9 digits after the decimal point.

*/