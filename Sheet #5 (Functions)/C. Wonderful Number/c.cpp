#include <iostream>
#include <string>
#include <bitset>
using namespace std;

bool odd(int a){
    return (a%2 != 0) ? true : false;
}

bool binaryPail(int a){

}

int main() {
    int a;
    cin >> a;

    string s = bitset<32>(a).to_string();
    int find = s.find('1')+1;
   /*  string binaryNum = s.substr(find-1, 32-find); */

    cout << find;

    
    
}
