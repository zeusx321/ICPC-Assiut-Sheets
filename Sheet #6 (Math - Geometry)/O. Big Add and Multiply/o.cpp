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

void sum(string s) {
    
    if (sz(s) < 5)
    {
        int n = stoi(s) + 9999;
        cout << n << endl;
    }else{
        string newS = s.substr(0, sz(s) - 4);
        int n = (stoi(s.substr(sz(s) - 4, 4)) + 9999);
        newS = newS + (n + '0');
    }
    
}

string multi(string s) {
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s;
    cin >> s;

    sum(s);
    cout << multi(s)

    return 0;
}