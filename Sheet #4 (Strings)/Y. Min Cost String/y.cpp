#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int arr[26];

    for (int i = 0; i < 26; i++)
        cin >> arr[i];

    int n = s.size();

    for (int i = 0; i < n; )
    {
        if (s[i] != '?')
        {
            i++;
            continue;
        }

        int l = i;

        while (i < n && s[i] == '?')
            i++;

        int r = i - 1;

        if (l == 0)
        {
            int right = arr[s[i] - 'a'];

            int best = 0;

            for (int j = 0; j < 26; j++)
            {
                if (arr[j] == right)
                {
                    best = j;
                    break;
                }
            }

            for (int j = l; j <= r; j++)
                s[j] = char(best + 'a');

            continue;
        }

        if (i == n)
        {
            int left = arr[s[l - 1] - 'a'];

            int best = 0;

            for (int j = 0; j < 26; j++)
            {
                if (arr[j] == left)
                {
                    best = j;
                    break;
                }
            }

            for (int j = l; j <= r; j++)
                s[j] = char(best + 'a');

            continue;
        }

        int left = arr[s[l - 1] - 'a'];
        int right = arr[s[i] - 'a'];

        int low = min(left, right);
        int high = max(left, right);

        int best = 0;

        for (int j = 0; j < 26; j++)
        {
            if (arr[j] >= low && arr[j] <= high)
            {
                best = j;
                break;
            }
        }

        for (int j = l; j <= r; j++)
            s[j] = char(best + 'a');
    }

    long long ans = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int num1 = arr[s[i] - 'a'];
        int num2 = arr[s[i + 1] - 'a'];

        ans += abs(num1 - num2);
    }

    cout << ans << '\n';
    cout << s << '\n';

    return 0;
}