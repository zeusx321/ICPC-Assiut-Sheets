#include <iostream>
using namespace std;

int main() {
    string x1,y1,x2,y2;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    if (y1 == y2){
        cout << "ARE Brothers";
    }else{
        cout << "NOT";
    }
    
    return 0;
}