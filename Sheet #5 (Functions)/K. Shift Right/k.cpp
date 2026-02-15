#include <iostream>
#include <iomanip>
using namespace std;

void printNum(int arr[], int num){
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
    
}

void shift(int arr[], int num, int repeatNum){
    int realRepeatNum = repeatNum % num;
    int realArr[num] = {0};
    if (realRepeatNum == 0)
    {
        printNum(arr, num);
        return;
    }

    int j = 0;
    for (int i = realRepeatNum; i < num; i++){
        realArr[i] = arr[j++];
    }
    for (int i = 0; i < realRepeatNum; i++){
        realArr[i] = arr[j++];
    }

    printNum(realArr, num);
    
}

int main() {
    int num, repeatNum;
    cin >> num >> repeatNum;

    int arr[num];

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    
    shift(arr, num, repeatNum);
}
