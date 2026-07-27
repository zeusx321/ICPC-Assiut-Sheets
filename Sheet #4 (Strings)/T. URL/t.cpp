#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    vector<string> arr;

    int start = s.find('=') + 1;

    s.erase(0, start);

    int end = s.find('&');
    cout << "username: " << s.substr(0, end) << endl;

    s.erase(0, end + 5);

    end = s.find('&');
    cout << "pwd: " << s.substr(0, end) << endl;

    s.erase(0, end + 9);

    end = s.find('&');
    cout << "profile: " << s.substr(0, end) << endl;

    s.erase(0, end + 6);

    end = s.find('&');
    cout << "role: " << s.substr(0, end) << endl;

    s.erase(0, end + 5);

    cout << "key: " << s.substr(0, -1) << endl;
    

    return 0;
}