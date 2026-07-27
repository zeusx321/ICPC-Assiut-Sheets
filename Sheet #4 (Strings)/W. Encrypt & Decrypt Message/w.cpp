#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    string s;
    cin >> s;

    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string orignal = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string arr;

    if (x == 1)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 97 && s[i] <= 122)
            {
            int num = (int)s[i] % 97;
            arr.push_back(key[num]);
            
            }

            if (s[i] >= 65 && s[i] <= 90)
            {
            int num = ((int)s[i] % 65) + 26;
            arr.push_back(key[num]);
            }

            if (s[i] >= 48 && s[i] <= 57)
            {
            int num = ((int)s[i] % 48) + (26*2);
            arr.push_back(key[num]);
            }
            
        }
    }else{
        for (int i = 0; i < s.size(); i++)
        {
            int num = key.find(s[i]);
            cout << orignal[num];
        }  
    }
    
    
    cout << arr; 
    return 0;
}