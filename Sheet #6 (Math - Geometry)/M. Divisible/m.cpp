#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

#define all(v) (v).begin(), (v).end()
#define sz(x) (int)(x).size()
#define fi first
#define se second

ll toDecimal(string n, int base) {
    ll res = 0;
    int si = sz(n) - 1;

    for (int i = 0; i < sz(n); i++)
    {
        if(n[i] >= '0' && n[i] <= '9'){
            res = res * base + (n[i] - '0');
        }else{
            int num = (n[i] - 'A') + 10;
            res = res * base + num;
        }
    }
    return res;
}

void fromDecimal(int n, int base) {
    string newS;

    while (n != 0)
    {
        int num = n % base;
        if(num < 10) newS.push_back(num + '0');
        else newS.push_back((char)(num + 55));
        
        n /= base;
    }

    for (int i = sz(newS) - 1; i >= 0; i--)
    {
        cout << newS[i];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t, n2, base;
    string n;
    cin >> t;

    if(t == 1) cin >> n >> base;
    else cin >> n2 >> base;

    ll res = 0;
    
    if (t == 1) cout << toDecimal(n, base);
    else fromDecimal(n2, base);

    return 0;
}