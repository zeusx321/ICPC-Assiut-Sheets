#include <bits/stdc++.h>
using namespace std;

bool binary(int a){
    string x = "";
    for (int i = a; i > 0; i = i / 2)
    {
        if (i%2 == 0)
        {
            x += "0";
        }else
        {
            x += "1";
        }
    }
    
    for (int i = 0; i < x.size() / 2; i++)
    {
        if (x[i] != x[x.size() - i - 1])
        {
            return false;
        }
    }

    return true;
}

int main() {
    int a;
    cin >> a;
   
    if (a%2 != 0)
    {
        (binary(a))? cout << "YES" : cout << "NO";
    }else{
        cout << "NO";
    }
}
