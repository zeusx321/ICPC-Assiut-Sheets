#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    string s, op;
    cin >> s;

    cin.ignore();

    for (int i = 0; i < k; i++)
    {
        getline(cin >> ws, op);

        if (op[0] == 'p' && op[1] == 'o') s.pop_back();
        if (op[0] == 'p' && op[1] == 'u'){
            char x = op[10];ء
            s.push_back(x);
        }
        if (op[0] == 'f' && op[1] == 'r') cout << s.front() << endl;
        if (op[0] == 'b' && op[1] == 'a') cout << s.back() << endl;
        if (op[0] == 's' && op[1] == 'o'){
            int space1 = op.find(" ") + 1;
            int space2 = op.find(" ", space1 + 1);

            int l = stoi(op.substr(space1, (space2 - space1)));
            int r = stoi(op.substr(space2+1, (op.size() - space2)));
            if (l > r) swap(l, r);
            sort(s.begin() + l - 1, s.begin() + r);
        }
        if (op[0] == 'r' && op[1] == 'e'){
            int space1 = op.find(" ") + 1;
            int space2 = op.find(" ", space1 + 1);

            int l = stoi(op.substr(space1, (space2 - space1)));
            int r = stoi(op.substr(space2+1, (op.size() - space2)));
            if (l > r) swap(l, r);
            reverse(s.begin() + l - 1, s.begin() + r);
        }
        if (op[0] == 'p' && op[1] == 'r'){
            int space1 = op.find(" ");

            int x = stoi(op.substr(space1+1, (op.size() - space1)));
            cout << s[x-1] << endl;
        }
        if (op[0] == 's' && op[1] == 'u'){
            int space1 = op.find(" ") + 1;
            int space2 = op.find(" ", space1 + 1);

            int l = stoi(op.substr(space1, (space2 - space1)));
            int r = stoi(op.substr(space2+1, (op.size() - space2)));
            if (l > r) swap(l, r);
            string x = s.substr(l-1, r - l + 1);
            cout << x << endl;
        }

    
    }
    

    return 0;
}
