#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    vector<string> arr;

    int l = 0, r = 0, index = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'L') l++;
        if (s[i] == 'R') r++; 
        if (l == r && l != 0)
        {
            string newS = s.substr(index, l*2);
            arr.push_back(newS);
            index = i + 1;
            l = 0;
            r = 0;
        }
    }

    cout << arr.size() << endl;

    if (arr.size() == 1){
        cout << s;
        return 0;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr.at(i) << endl;
    }
    
    

    return 0;
}