#include <iostream>
using namespace std;

int main() {
    int n, num1, num2, mini, maxi, sum = 0;

    cin >> n >> num1 >> num2;

    string numStr;

    mini = min(num1, num2);
    maxi = max(num1, num2);
    
    for (int i = mini; i <= n; i++)
    {
        numStr = to_string(i);
        int sum2 = 0;
        for (int j = 0; j < numStr.length(); j++)
        {
            sum2 += numStr[j] - '0';
        }
        

        if (sum2 >= mini && sum2 <= maxi)
        {
            sum += i;
        }else
        {
            continue;
        }
    }
    
    cout << sum;  
    
    return 0;
}