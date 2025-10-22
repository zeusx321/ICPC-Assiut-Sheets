#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    long long z, max=0;

    for (int i = 0; i < x; i++)
    {
        cin >> z;
        if(z>max){
            max = z;
        }else
        {
            continue;
        }
        
    }

    cout << max;
    
    return 0;
}
