#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

void getNum(int arr[], int num){
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    
}

void distinct(int arr[], int num){
    sort(arr, arr + num);
    
    int distinctNum = 0;
    bool flag = true;

    for (int i = 1; i < num; i++)
    {
        if (arr[i] != arr[i-1])
        {
            distinctNum++;
            flag = true;
        }else if(arr[i] == arr[i-1]){
            if (flag)
            {
                distinctNum++;
                flag = false;
            }
            
        }
        
    }

    cout << distinctNum;
    
}

int main() {
    
    int num;
    cin >> num;

    int arr[num];

    getNum(arr, num);
    
    distinct(arr, num);
    
}
