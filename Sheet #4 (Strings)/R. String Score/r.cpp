#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    string s;
    cin >> s;

    long long score = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if((s.size() - 1 == i && s[i] == 'X') || (s.size() - 1 == i && s[i] == 'Y') || (s.size() - 1 == i && s[i] == 'Z')) break;
        if(s[i] == 'V') score += 5;
        if(s[i] == 'W') score += 2;
        if(s[i] == 'X') i += 1;
        if(s[i] == 'Y'){
            s.push_back(s[i+1]);
            s.erase(i+1, 1);
        }
        if(s[i] == 'Z'){
            if(s[i+1] == 'V'){
                score /= 5;
                i += 1;
            }
            if(s[i+1] == 'W'){
                score /= 2;
                i += 1;
            }
        }
    }
    
    cout << score;

    return 0;
}