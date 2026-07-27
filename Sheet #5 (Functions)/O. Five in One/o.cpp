#include <bits/stdc++.h>
using namespace std;

void getNum(vector<int>& arr, int num) {
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }
}

void maxi(vector<int> arr, int num) {
    int maxNum = -1000;
    for (int i = 0; i < num; i++)
    {
        if (maxNum < arr.at(i))
        {
            maxNum = arr.at(i);
        }
    }

    cout << "The maximum number : " << maxNum << endl;
}

void mini(vector<int> arr, int num) {
    int minNum = 1000;
    for (int i = 0; i < num; i++)
    {
        if (minNum > arr.at(i))
        {
            minNum = arr.at(i);
        }
    }

    cout << "The minimum number : " << minNum << endl;
}

void primeNum(vector<int> arr, int num) {
    int numOfPrimes = 0;

    for (int i = 0; i < num; i++)
    {
        if (arr.at(i) == 1) continue;
        if (arr.at(i) == 2 || arr.at(i) == 3){
            numOfPrimes++;
            continue;
        }
        
        bool flag = true;
        for (int j = 2; j <= sqrt(arr.at(i)); j++)
        {
            if (arr.at(i) % j == 0 || arr.at(i) % j+2 == 0)
            {
                flag = false;
                break;
            }
        }
        if(flag) numOfPrimes++;
    }
    

    cout << "The number of prime numbers : " << numOfPrimes << endl;
}

void palindrome(vector<int> arr, int num) {
    int numOfPal = 0;

    for (int i = 0; i < num; i++)
    {
        if (arr.at(i) < 10)
        {
            numOfPal++;
            continue;
        }
        if (arr.at(i) % 11 == 0) numOfPal++;
    }

    cout << "The number of palindrome numbers : " << numOfPal << endl;
}

void divisors(vector<int> arr, int num) {
    int numDiv = 0;

    sort(arr.begin(), arr.end());

    vector<int> newArr(num);

    for (int i = 0; i < num; i++)
    {
        int divs = 2;
        if (arr.at(i) == 1 || arr.at(i) == 3)
        {
            newArr.at(i) = 1;
            continue;
        }

        if (arr.at(i) == 2)
        {
            newArr.at(i) = 2;
            continue;
        }

        for (int j = 2; j <= arr.at(i) / 2; j++)
        {
            if (arr.at(i) % j == 0) divs += 1;
        }
        newArr.at(i) = divs; 
    }

    int maxNum = -1000;
    for (int i = 0; i < num; i++)
    {
        if (maxNum <= newArr.at(i))
        {
            maxNum = newArr.at(i);
            numDiv = arr.at(i);
        }
    }
    

    cout << "The number that has the maximum number of divisors : " << numDiv;
}

int main() {
    int num;
    cin >> num;

    vector<int> arr(num);

    getNum(arr, num);

    maxi(arr, num);
    mini(arr, num);
    primeNum(arr, num);
    palindrome(arr, num);
    divisors(arr, num);

    return 0;
}