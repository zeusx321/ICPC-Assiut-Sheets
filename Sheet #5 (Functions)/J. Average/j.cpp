#include <iostream>
#include <iomanip>
using namespace std;

void getElements(int num, double arr[]){
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
}

void avg(int num, double arr[]){
    cout << fixed << setprecision(7);
    double sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum += arr[i];
    }
    cout << sum/num;
}

int main() {
    int num;
    cin >> num;

    double arr[num];

    getElements(num, arr);

    avg(num, arr);

}
