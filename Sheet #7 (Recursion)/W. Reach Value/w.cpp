#include <bits/stdc++.h>
using namespace std;

bool v(long long n){
    if (n == 1) return true;

    bool a = false;
    bool b = false;

    if (n % 10 == 0) a = v(n / 10);

    if (n % 20 == 0) b = v(n / 20);

    return a || b;
    
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--)
    {
        long long num;
        cin >> num;

        if (num == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        

        (v(num))? cout << "YES" << endl : cout << "NO" << endl;
    }
    
    return 0;
} 