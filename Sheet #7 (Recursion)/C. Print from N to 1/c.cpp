#include <bits/stdc++.h>
using namespace std;
 
int num(int n){
    if(n==1) return n;
    cout << n << " ";
    return num(n-1);
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    cout << num(n);
    
    return 0;
}