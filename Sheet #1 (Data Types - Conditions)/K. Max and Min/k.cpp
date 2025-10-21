#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    cin >> x >> y >> z;

    int min, max;

    if (x<y){
        if (x<z)
        {
            min = x;
        }else{
            min = z;
        }
    }else if (y<z) {
        min = y;
    }else{
        min = z;
    }

    if (x>y){
        if (x>z)
        {
            max = x;
        }else{
            max = z;
        }
    }else if (y>z) {
        max = y;
    }else{
        max = z;
    }
    cout << min << " " << max;
    return 0;
}