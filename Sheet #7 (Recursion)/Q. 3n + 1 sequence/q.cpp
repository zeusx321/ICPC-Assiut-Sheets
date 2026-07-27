#include <bits/stdc++.h>
using namespace std;

int seq(int n, int num){
    if(n == 1) return num+1;

    if(n % 2 == 0) return seq(n/2, num +1); 
    if(n % 2 != 0) return seq(3*n+1, num +1); 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int num = 0;

    cout << seq(n, num);
    
    return 0;
} 