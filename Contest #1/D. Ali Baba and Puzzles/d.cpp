#include <iostream>
using namespace std;

int main() {
    long long a, b, c, x;
    cin >> a >> b >> c >> x;

    if(a+b-c == x) cout << "YES";
    else if(a-b+c == x) cout << "YES";
    else if(a*b+c == x) cout << "YES";
    else if(a*b-c == x) cout << "YES";
    else if(a+b*c == x) cout << "YES";
    else if(a-b*c == x) cout << "YES";
    else if(a*b+c == x) cout << "YES";
    else if(a*b-c == x) cout << "YES";
    else cout << "NO";
    
    
    return 0;
}
