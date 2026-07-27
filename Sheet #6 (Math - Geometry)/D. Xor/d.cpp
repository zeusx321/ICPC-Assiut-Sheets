#include <iostream>
using namespace std;

long long xorCal(long long a, long long b, long long q, int x){
    if (q == 1) return a;
    if (q == 2) return b;
    if (x==0) return b ^ a;

    long long y = b^a;
    if (x==1) return y ^ b;
    if (x==2) {
        long long z = y ^ b;
        return z ^ y;
    }

}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b, q;
    cin >> a >> b >> q;

    int x = 0;
    if (q>=3)
    {
        x = q%3;
    }
    
    cout << xorCal(a,b,q,x);

    return 0;
}