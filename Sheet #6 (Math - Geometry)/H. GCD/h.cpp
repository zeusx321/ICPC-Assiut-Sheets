#include <bits/stdc++.h>
using namespace std;

long long gcd(int a, int b){
    if (b==0) return 1;

    return gcd(b, a%b); 
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b;
    cin >> a >> b;

    long long lcm = (a * b) / gcd(a,b);

    cout << gcd(a,b) << " " << lcm;

    return 0;
}