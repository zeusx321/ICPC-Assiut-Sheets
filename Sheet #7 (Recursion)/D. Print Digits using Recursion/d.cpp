#include <bits/stdc++.h>
using namespace std;

string num(int a, string s, int z){
    if(z == a) return s[z] + " ";
    cout << s[z] << " ";
    return num(a, s, z+1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while(n--){
        int x;
        cin >> x;

        string s = to_string(x);
        int a = s.size(), z = 0;
        cout << num(a, s, z) << endl;
    }
    
    return 0;
}