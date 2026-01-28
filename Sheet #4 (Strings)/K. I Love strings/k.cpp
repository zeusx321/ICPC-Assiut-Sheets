#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cin >> num;

    while(num--){
        string x, y;
        cin >> x >> y;

        int xSize = x.size();
        int ySize = y.size();

        int maxSize = max(xSize, ySize);

        string newChar;

        for(int i = 0; i < maxSize; i++){
            if(i < xSize && i < ySize){ 
                newChar += x[i];
                newChar += y[i];
            }
            else if(i >= xSize){
                newChar += y[i];
            }else if(i >= ySize){
                newChar += x[i];
            }

        }

        cout << newChar << endl;
    } 

    return 0;
}
