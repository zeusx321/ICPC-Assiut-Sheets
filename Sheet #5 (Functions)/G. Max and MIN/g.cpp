#include <iostream>
using namespace std;

void minNum(int arr[], int num){
    int mini = 1000000;
      for (int i = 0; i < num; i++)
      {
        mini = min(mini, arr[i]);
      }
      cout << mini << " ";
}

void maxNum(int arr[], int num){
    int maxi = 0;
      for (int i = 0; i < num; i++)
      {
        maxi = max(maxi, arr[i]);
      }
      cout << maxi;
}

int main() {
    int num;
    cin >> num;

    int arr[num];

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    
    minNum(arr, num);
    maxNum(arr, num);
    
}
