#include <bits/stdc++.h>
using namespace std;

int main() {
    /* ios::sync_with_stdio(false);
    cin.tie(nullptr); */

    string s;

    vector<string> arr;

    bool flag = false;

    while (getline(cin, s))
    {
        if (s[0] == '/' && s[1] == '*') {     
            flag = true;
            continue;  
        }
        if (s[0] == '*' && s[1] == '/') {     
            flag = false;
            continue;  
        }
        if (flag) continue;
        if (s[0] == '/' && s[1] == '/') continue;
        if (s.empty()) continue;

        int x = s.find("//");
        if(x == -1) {
            arr.push_back(s);
        }else{
            arr.push_back(s.substr(0, x));
        }

        
        
        if(s[0] == '}') break;
        
    }
    
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }


    return 0;
}
