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

void mainSwap(int arr1[], int arr2[], int num){
    int newArr[num*2];

    for (int i = 0; i < num*2; i++)
    {
        if (i >= num)
        {
            int x = 0;
            for (int j = num; j < num*2; j++)
            {
                newArr[j] = arr1[x];
                x++;
                
            }
        }else
        {
            for (int j = 0; j < num; j++)
            {
                newArr[i] = arr2[i];
            }
        }
        
        
    }

    printNum(newArr, num*2);
    
}

int main() {
    int num;
    cin >> num;

    int arr1[num];
    int arr2[num];

    getNum(arr1, num);
    getNum(arr2, num);

    mainSwap(arr1, arr2, num);
    
    
}
