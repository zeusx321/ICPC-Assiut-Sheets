#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

void lol(int x){
    vector<int> div;

    for (int i = 1; i <= sqrt(x); i++)
    {
        if ( x % i == 0 )
        {
            div.push_back(i);
            div.push_back(x/i);
        }
        
    }

    sort(div.begin(), div.end());
    
    for (int i = 0; i < div.size(); i++)
    {
        cout << div.at(i) << " ";
    }

}


int main() {
    int x;
    cin >> x;

    lol(x);
 
    return 0;
}