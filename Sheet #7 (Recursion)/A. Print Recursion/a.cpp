#include <bits/stdc++.h>
using namespace std;

string recursion(int n){
    if(n==1) return "I love Recursion";
    cout << "I love Recursion" << endl;
    return recursion(n-1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    cin >> n;

    cout << recursion(n);
    
    return 0;
}