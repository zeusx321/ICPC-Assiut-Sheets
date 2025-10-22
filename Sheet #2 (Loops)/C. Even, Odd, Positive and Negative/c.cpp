#include <iostream>
using namespace std;

int main() {
    int x;

    cin >> x;

    int even = 0, odd = 0, pos = 0, neg = 0;

    for (int i = 1; i <= x; i++)
    {
        int num;
        cin >> num;

        if (num%2==0)
        {
            even++;
        }else
        {
            odd++;
        }
        
        if (num>0)
        {
            pos++;
        }else if(num == 0){
            continue;
        }else
        {
            neg++;
        }
        
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
    
    return 0;
}
