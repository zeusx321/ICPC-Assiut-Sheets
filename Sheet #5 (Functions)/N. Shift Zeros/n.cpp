#include <iostream>
#include <iomanip>
using namespace std;

void getNum(int arr[], int num){
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    
}

void printNum(int arr[], int num){
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
    
}

void shiftZero(int arr[], int num){
    int newArr[num] = {0};
    int j = 0;

    for (int i = 0; i < num; i++)
    {
        if(arr[i] != 0){
            newArr[j++] = arr[i]; 
        }
    }

    printNum(newArr, num);
    
}

int main() {
    
    int num;
    cin >> num;

    int arr[num];

    getNum(arr, num);
    
    shiftZero(arr, num);
}
