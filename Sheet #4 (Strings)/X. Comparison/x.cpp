#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    if(s.size() < 2){
        cout << s;
        return 0;
    }

    string newS = "";
    vector<string> arr;

    for (int i = 0; i < s.size()-1; i++)
    {
        string leftS = s.substr(0, i + 1);
        string rightS = s.substr(i + 1, s.size() - (i + 1));
        sort(rightS.begin(), rightS.end());
        sort(leftS.begin(), leftS.end());

        newS = leftS + rightS;
        arr.push_back(newS);
    }

    string min = arr[0];

    for (int i = 0; i < arr.size() - 1; i++)
    {
        if(min > arr[i+1]) min = arr[i+1];
    }
    
    cout << min;
    

    return 0;
}