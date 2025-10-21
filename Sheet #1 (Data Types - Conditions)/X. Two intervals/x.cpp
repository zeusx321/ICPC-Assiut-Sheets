#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x1, x2, y1, y2, l, r;

    cin >> x1 >> x2 >> y1 >> y2;

    l = max(x1,y1);
    r = min(x2,y2);
    
    if (x2<y1 || x1>y2)
    {
        cout << "-1";
    }else
    {
        cout << l << " " << r;
    }

    return 0;
}