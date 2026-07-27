#include <bits/stdc++.h>
using namespace std;

void pyramid(int n, int x, int star){
    if (x == 0) {
        cout << "*";
        if(star == 0){
            return;
        }
        pyramid(n, x, star - 1);
    }

    if (x > 0)
    {
        cout << " ";
        pyramid(n, x-1, star);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x, star;
    cin >> n;
    
    x = 0, star = (2*n);
    while(n--){
        
        pyramid(n, x, star);
        cout << endl;
        x++;
        star = star - 2;
    }
    
    return 0;
} 